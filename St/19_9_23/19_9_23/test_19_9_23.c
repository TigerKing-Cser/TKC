//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//
//#include <stdlib.h>
//
//#include <time.h>
//void menu()
//
//{
//
//	printf("****************************\n");
//
//	printf("*****      1. play     *****\n");
//
//	printf("*****      0. exit     *****\n");
//
//	printf("****************************\n");
//
//}
//
////RAND_MAX
//
//
//
//
//
//#include <stdlib.h>
//
//#include <time.h>
//
//
//
//void game()
//
//{
//
//	//1. 生成随机值
//
//	int ret = 0;
//
//	int guess = 0;
//
//	//时间戳
//
//	ret = rand()%100+1;
//
//
//
//	//printf("%d\n", ret);
//
//	//2. 猜数字
//
//	while(1)
//
//	{
//
//		printf("请猜数字:>");
//
//		scanf("%d", &guess);
//
//		if(guess < ret)
//
//		{
//	
//			printf("猜小了\n");
//
//		}
//
//		else if(guess > ret)
//
//		{
//	
//			printf("猜大了\n");
//
//		}
//
//		else
//
//		{
//
//			printf("恭喜你，猜对了\n");
//
//			break;
//
//		}
//
//	}
//
//}
//
//int main()
//
//{
//
//	int input = 0;
//
//	srand((unsigned int)time(NULL));
//
//	do 
//
//	{
//
//		menu();
//
//		printf("请选择:>");
//
//		scanf("%d", &input);
//
//		switch(input)
//
//		{
//
//		case 1:
//
//			game();
//
//			break;
//
//		case 0:
//
//			printf("退出游戏\n");
//
//			break;
//
//		default:
//
//			printf("选择错误， 重新选择!\n");
//
//			break;
//
//		}
//
//	} while (input);
//
//	return 0;
//
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include <stdlib.h>

#include <time.h>
int main() {
	int i = 0;
	i = (int)( 5 * rand() / (RAND_MAX + 1.0)) + 1;
	printf("%d", i);

}