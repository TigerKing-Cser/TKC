#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*
�ݹ�ͷǵݹ�ֱ�ʵ�����N��쳲�������
*/
/********************�ݹ�ʵ��***************************/
//int fib(int n){
//	if (n > 2) {
//		return fib(n - 1) + fib(n - 2);
//	}
//	if (n == 1 || n == 2) {
//		return 1;
//	}
//	return fn(n);
//}
//int main(){
//	int x;
//	scanf("%d", &x);
//	printf("%d", fib(x));
//	return 0;
//}
/********************�ǵݹ�ʵ��**************************/
//int fib(int n){
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n--) {
//		if (n >= 2) {
//			c = a + b;
//			a = b;
//			b = c;
//		}
//	}
//	return c;
//}
//int main() {
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d", fib(x));
//	return 0;
//}
/*
��дһ������ʵ��n^k,ʹ�õݹ�ʵ��
*/
int sqrt(int n, int k) {
	if (n == 1) {
		return 1;
	}
	if (k == 1) {
		return n;
	}
	return n * sqrt(n, k - 1);
}
int main() {
	int x = 3;
	int y = 3;
	printf("%d", sqrt(x, y));
	return 0;
}