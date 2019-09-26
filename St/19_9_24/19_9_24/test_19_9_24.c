/* 二分查找  */
#include<stdio.h>

#include<string.h>

int binary_search(int arr[] , int x ,int sz){
	int i = 0;
	int left = 0;
	int right = sz - 1;
	
	int Mid = 0;
	while (right >= left) {
		Mid = (left + right) / 2;
		if (arr[Mid] > x) {
			right = Mid - 1;	
		}
		else if (arr[Mid] < x) {
			left = Mid + 1;

		}
		else {
			return Mid;
		}
	}
	return -1;
}
int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 5;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	int ret = 0;
	ret = binary_search(arr1, k,sz);
	if (ret == -1) {
		printf("找不到这个数");
	}
	else {
		printf("找到了，这个数的下标是:%d",ret);
	}
}
/* 猜数字游戏 */ 
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu() {
//	printf("*************************\n");
//	printf("********1. play**********\n");
//	printf("********0. exit**********\n");
//	printf("*************************\n");
//}
//void game() {
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100 + 1;
//	while (1) {
//		printf("输入你要猜的数:");
//		scanf("%d", &guess);
//		if (ret > guess) {
//			printf("猜小了\n");
//		}
//		if (ret < guess) {
//			printf("猜大了\n");
//		}
//		if (ret == guess) {
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main() {
//	int choose = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{	
//		menu();
//		printf("输入选项:\n");
//		scanf("%d", &choose);
//		switch (choose)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出成功");
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (choose);
//	return 0;
//}
