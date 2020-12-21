#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include"coroutine.h"

int tcp_init(){
	int lfd = socket(AF_INET, SOCK_STREAM, 0);
	if( lfd == -1){
		perror("socket error");
		exit(1);
	}
	int op = 1;
	setsockopt(lfd, SOL_SOCKET, SO_REUSEADDR, &op, sizeof(op));

	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(9000);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	int ret = bind(lfd, (struct sockaddr*)&addr, sizeof(addr));
	if(ret < 0){
		perror("bind error");
	}
	listen(lfd, SOMAXCONN);
	return lfd;
}

void set_nonblock(int fd){
	int flgs = fcntl(fd, F_GETFL, 0);
	flgs |= O_NONBLOCK;
	fcntl(fd, F_SETFL, flgs);
}

void accept_conn(int lfd, schedule_t* s, int* co_ids, void*(*call_back)(schedule_t* s, void* args)){
	while(1){
		int cfd = accept(lfd, NULL, NULL);
		if(cfd > 0){
			set_nonblock(cfd);
			int args[] = {lfd, cfd};
			int id = coroutine_creat(s, call_back, args);
			int i = 0;
			for(; i < CORSZ; i++){
				if(co_ids[i] == -1){
					co_ids[i] = id;
					break;
				}
			}
			if(i == CORSZ){
				printf("Á¬½ÓÌ«¶à\n");
			
			}
			coroutine_running(s, id);
		}
		else{
			int i;
			for(i = 0; i < CORSZ; i++){
				int cid = co_ids[i];
				if(cid == -1) continue;
				coroutine_resume(s, cid);
			}
		}	
	}	
}

void* handle(schedule_t* s, void* args){
	int* arr = (int*)args;
	int cfd = arr[1];
	char buf[1024] = {0};
	while(1){
		memset(buf, 0, sizeof(buf));
		int ret = read(cfd, buf, 1024);
		if(ret == -1){
			coroutine_yield(s);
		}
		else if(ret == 0){
			break;
		}
		else{
			printf("sever recv:%s\n", buf);
			if( strncasecmp(buf, "exit", 4) == 0){
				break;
			}
			memset(buf, 0, sizeof(buf));
			printf("sever send:");
			scanf("%s", buf);
			write(cfd, buf, sizeof(buf));
		}
	}
}

int main(){
	int lfd = tcp_init();
	set_nonblock(lfd);
	schedule_t* s = schedule_creat();
	int co_ids[CORSZ];
	int i = 0;
	for(; i < CORSZ; i++){
		co_ids[i] = -1;
	}
	accept_conn(lfd, s, co_ids, handle);
	schedule_destroy(s);
} 