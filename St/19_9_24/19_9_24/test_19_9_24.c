/* ���ֲ���  */
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
		printf("�Ҳ��������");
	}
	else {
		printf("�ҵ��ˣ���������±���:%d",ret);
	}
}
/* ��������Ϸ */ 
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
//		printf("������Ҫ�µ���:");
//		scanf("%d", &guess);
//		if (ret > guess) {
//			printf("��С��\n");
//		}
//		if (ret < guess) {
//			printf("�´���\n");
//		}
//		if (ret == guess) {
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("����ѡ��:\n");
//		scanf("%d", &choose);
//		switch (choose)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳��ɹ�");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (choose);
//	return 0;
//}
