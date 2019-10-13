#include "game.h"

void test(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		printf("********************\n");
		printf("*******1. play******\n");
		printf("*******0. exit******\n");
		printf("********************\n");
		scanf("%d", &input);
		if (input == 1) {
			game();
		}
		else if (input == 0) {
			printf("退出游戏成功\n");
		}
		else {
			printf("输入错误请重新输入\n");
		}
	} while (input);
}

int main() {
	test();
	return 0;
}