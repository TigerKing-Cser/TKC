/*
模拟用户登陆
*/
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr[20] = { 0 };
//	int i = 3;
//	while (i--) {
//		scanf("%s", &arr);
//		if (strcmp(arr, "123456")) {
//			printf("输入错误，请重新输入\n");
//		}
//		if (!strcmp(arr, "123456")){
//			printf("登陆成功");
//			break;
//		}
//		if (i == 0) {
//			printf("已经输入三次，退出\n");
//		}
//	}
//}
#include<stdio.h>
int main() {
	char ch = 0;
	while ( ch != EOF) {
		ch = getchar();
		if (ch >= 65 && ch <= 90) {
			putchar(ch + 32);
			printf("\n");
		}
		if (ch >= 97 && ch <= 122) {
			putchar(ch - 32);
			printf("\n");
		}
		else {

		}
	}
}