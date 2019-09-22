/*
编写程序数一下 1到 100 的所有整数中出现多少次数字9。
*/
/*******************************************************/
//#include<stdio.h>
//int main() {
//	int count = 0;
//	int i = 0;
//	for (i = 0; i <= 100; i++) {
//		if (i % 10 == 9 || i / 10 == 9) {
//			count++;
//			if (i % 10 == 9 && i / 10 == 9) {
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
/*
在屏幕上输出以下图案：					i = 13;
       *			i		空格       星星			
      ***			1		 6			1
     *****			2		 5			3
    *******			3		 4			5
   *********
  ***********
 *************		7		 0			13
  ***********		8		 1          11
   *********		9		 2			 9
    *******			10		 3			 7
     *****	
      ***
       *			13		 6			 1
*/
#include<stdio.h>
int main() {
	int i = 1;
	int j = 1;
	int k = 1;
	int x = 1;
	int y = 1;
	for (i = 1; i <= 13; i++) { 
		if (i <= 7) {
			for (j = 1; j <= 7 - i; j++) {
				printf(" ");
			}
			for (k = 1; k <= 2 * i - 1; k++) {
				printf("*");
			}
		}
		if (i >= 8) {
			for (x = 1; x <= i - 7; x++) {
				printf(" ");
			}
			for (y = 1; y <= 27 - 2*i; y++) {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
/*
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
*/
/***************************************************/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int i = 1;
//	int sum = 0;
//	printf("请输入一个数字:");
//	scanf("%d", &a);
//	for (i = 1; i <= 5; i++) {
//		sum = sum + a;
//		a = 10 * a + a % 10;
//	}
//	printf("Sn = %d", sum);
//}