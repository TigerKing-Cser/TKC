#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*
�ݹ�ͷǵݹ�ֱ�ʵ��strlen
*/
/****************�ݹ�ʵ��***********************/
//int my_strlen(char* string) {
//	if (*string != '\0') {
//		return my_strlen(string+1) + 1;
//	}
//	else
//		return 0;
//}
//int main() {
//	char ch[] = { "abcde" };
//	int ret = my_strlen(ch);
//	printf("%d", ret);
//}
/****************�ǵݹ�ʵ��**********************/
//int my_strlen(char* string) {
//	int count = 0;
//	while (*string != '\0') {
//		count++;
//		string++;
//	}
//	return count;
//}
//int main() {
//	char ch[] = { "abcde" };
//	int ret = my_strlen(ch);
//	printf("%d", ret);
//}
/*
�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
*/
/****************�ݹ�ʵ��***********************/
//int factorial(int x) {
//	if (x >= 2) {
//		return x * factorial(x - 1);
//	}
//	else
//		return 1;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",factorial(n));
//}
/****************�ǵݹ�ʵ��**********************/
//int factorial(int x) {
//	int i = 0;
//	int fn = 1;
//	for (i = 1;i <= x;i++) {
//		fn = fn * i;
//	}
//	return fn;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", factorial(n));
//}
/*�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ*/ 
void my_print(int n) {
	if (n >= 9) {
		printf("%d", n % 10);
		my_print(n / 10);
	}
	else {
		printf("%d", n);
	}
}
int main() {
	int x = 1234;
	my_print(x);
}