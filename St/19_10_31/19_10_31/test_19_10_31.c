#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
/*
��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��

�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
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
��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
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
���ʵ�֣�
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩
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