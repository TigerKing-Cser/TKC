#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include <stdlib.h>

#include <time.h>
void menu()

{

	printf("****************************\n");

	printf("*****      1. play     *****\n");

	printf("*****      0. exit     *****\n");

	printf("****************************\n");

}

//RAND_MAX





#include <stdlib.h>

#include <time.h>



void game()

{

	//1. �������ֵ

	int ret = 0;

	int guess = 0;

	//ʱ���

	ret = rand()%100+1;



	//printf("%d\n", ret);

	//2. ������

	while(1)

	{

		printf("�������:>");

		scanf("%d", &guess);

		if(guess < ret)

		{
	
			printf("��С��\n");

		}

		else if(guess > ret)

		{
	
			printf("�´���\n");

		}

		else

		{

			printf("��ϲ�㣬�¶���\n");

			break;

		}

	}

}

int main()

{

	int input = 0;

	srand((unsigned int)time(NULL));

	do 

	{

		menu();

		printf("��ѡ��:>");

		scanf("%d", &input);

		switch(input)

		{

		case 1:

			game();

			break;

		case 0:

			printf("�˳���Ϸ\n");

			break;

		default:

			printf("ѡ����� ����ѡ��!\n");

			break;

		}

	} while (input);

	return 0;

}