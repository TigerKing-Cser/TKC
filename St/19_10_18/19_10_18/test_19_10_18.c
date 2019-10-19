#include "game.h"



void test(){

	int input = 0;

	srand((unsigned int)time(NULL));

	do {
		printf("*****************************\n");
		printf("**********1.play*************\n");
		printf("**********0.exit ************\n");
		printf("*****************************\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		}
	} while (input);
}

int main() {

	test();

	return 0;
}