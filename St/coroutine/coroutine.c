#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"coroutine.h"

schedule_t* schedule_creat(){
	schedule_t* s = (schedule_t*)malloc(sizeof(schedule_t));
	if(s != NULL){
		s->coroutines = (coroutine_t**)malloc(sizeof(coroutine_t*)*CORSZ);
		memset(s->coroutines, 0, sizeof(coroutine_t*)*CORSZ);
		s->current_id = -1;
		s->max_id = 0;
	}
	return s;
}

//Э�̻ص�����
static void* main_func(schedule_t* s){
	if(s->current_id != -1){
		coroutine_t* c = s->coroutines[s->current_id];
		c->call_back(s, c->args);
		c->state = DEAD;	//Ŀ�꺯��ִ�����
		s->current_id = -1;
	}
}
//����Э�̣� ���ص�ǰЭ���ڵ��ȵĵ�ǰ�±�
int coroutine_creat(schedule_t* s, void* (*call_back)(schedule_t*, void* args), void* args){
	coroutine_t* c = NULL;
	int i = 0;
	for(i = 0; i < s->max_id; i++){
		c = s->coroutines[i];
		if(c->state == DEAD){
			break;
		}
	}

	if(i == s->max_id || c == NULL){
		s->coroutines[i] = (coroutine_t*)malloc(sizeof(coroutine_t));
		s->max_id++;
	}

	c = s->coroutines[i];
	c->call_back = call_back;
	c->args		 = args;
	c->state	 = READY;

	getcontext(&c->ctx);
	c->ctx.uc_stack.ss_sp = c->stack;
	c->ctx.uc_stack.ss_size = STACKSZ;
	c->ctx.uc_stack.ss_flags = 0;
	c->ctx.uc_link = &s->ctx_main;
	makecontext(&c->ctx, (void(*)())&main_func, 1, s);

	return i;
}

//��ȡЭ��״̬
static enum State get_status(schedule_t* s, int id){
	coroutine_t* c = s->coroutines[id];
	if(c == NULL){
		return DEAD;
	}
	return c->state;
}

//����Э��
void coroutine_running(schedule_t* s, int id){
	int st = get_status(s, id);
	if(st == DEAD){
		return;
	}
	coroutine_t* c = s->coroutines[id];
	c->state = RUNNING;
	s->current_id = id;
	swapcontext(&s->ctx_main, &c->ctx);
}

//�ó�CPU
void coroutine_yield(schedule_t* s){
	 coroutine_t* c = s->coroutines[s->current_id];
	 c->state = SUSPEND;
	 s->current_id = -1; 
	 swapcontext(&c->ctx, &s->ctx_main);
}

//����CPU
void coroutine_resume(schedule_t* s, int id){
	coroutine_t* c = s->coroutines[id];
	if(c != NULL && c->state == SUSPEND){
		c->state = RUNNING;
		s->current_id = id;
		swapcontext(&s->ctx_main, &c->ctx);
	}
}

//ɾ��Э��
void delete_coroutine(schedule_t* s, int id){
	coroutine_t* c = s->coroutines[id];
	if(c != NULL){
		free(c);
		s->coroutines[id] = NULL;
	}
}

//�ͷŵ�����
void schedule_destroy(schedule_t* s){
	int i;
	for(i = 0; i < s->max_id; i++){
		delete_coroutine(s, i);
	}
	free(s->coroutines);
	free(s);
}

//�ж��Ƿ�����Э�̶�������
int schedule_finished(schedule_t* s){
	if(s->current_id != -1){
		return 0;
	}
	int i;
	for(i = 0; i < s->max_id; i++){
		coroutine_t* c = s->coroutines[i];
		if(c	->state != DEAD){
			return 0;
		}
	}
	return 1;
}