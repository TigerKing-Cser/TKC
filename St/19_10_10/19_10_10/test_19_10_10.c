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
			printf("�˳���Ϸ�ɹ�\n");
		}
		else {
			printf("�����������������\n");
		}
	} while (input);
}

int main() {
	test();
	return 0;
}