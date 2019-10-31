#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
/*
编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值是value的二进制位模式从左到右翻转后的值。

如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
2550136832
*/
//unsigned int reverse_bit(unsigned int x) {
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 32; i++) {
//		ret += ((x >> i) & 1) * pow(2, 31-i);
//	}
//	return ret;
//}
//unsigned int reverse_bit1(unsigned int x) {
//	int ret = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++) {
//		ret <<= 1;
//		ret |= ((x >> i) & 1);
//	}
//	return ret;
//}
//int main() {
//	int x = 0;
//	scanf("%u",&x)
//	printf("%u\n",reverse_bit(x));
//	printf("%u\n", reverse_bit1(x));
//}
/*
不使用（a+b）/2这种方式，求两个数的平均值。
*/
//int avg(int a, int b) {
//	return (a + b) >> 1;
//}
//int avg1(int a, int b) {
//	return (a & b) + ((a ^ b) >> 1);
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	printf("%d\n", avg(a, b));
//	printf("%d\n", avg1(a, b));
//}
/*
编程实现：
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）
*/
int find(int *arr, int len) {
	int i = 0;
	int ret = 0;
	for (i = 0; i < len; i++) {
		ret ^= arr[i];
	}
	return ret;
}

int main() {
	int arr[] = { 1, 1, 2, 2, 3, 3, 8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d", find(arr, len));
}