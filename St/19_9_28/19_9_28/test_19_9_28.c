#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
///*
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。 
//*/
///****************************************************************/
//void MpTable(int n) {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	MpTable(n);
//}
/*
使用函数实现两个数的交换。
*/
/******************************************************************/
//void swap(int* x, int* y) {
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("%d %d", a, b);
//	swap(&a, &b);
//	printf("\n%d %d", a, b);
//}
/*
实现一个函数判断year是不是润年。
*/
/**********************************************/
//int is_Leapyear(int year) {
//	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//}
//int main() {
//	int i = 0;
//	for (i = 1;i <= 4000;i++) {
//		if (is_Leapyear(i) == 1) {
//			printf("%d\t", i);
//
//		}
//	}
//}
///*
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//*/
///*init（）初始化数组*/
//void init(int* p,int size){
//	int i = 0;
//	for (i = 0;i < size;i++) {
//		*p = 0;
//		p++;
//	}
//}
///*empty（）清空数组、*/
//void empty(int arr[],int size) {
//	int i = 0;
//	for (i = 0;i < size;i++) {
//		arr[i] = 0;
//		arr++;
//	}
//}
///*
//实现reverse（）函数完成数组元素的逆置。
//*/
//void reverse(int arr[],int size) {
//	int left = 0;
//	int right = size-1;
//	int tmp = 0;
//	while (left <= right) {
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int i = 0;
//	int size = sizeof(arr1) / sizeof(0);
//	reverse(arr1, size);
//	for (i = 0;i < 5;i++) {
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	init(arr1, size);
//	for (i = 0;i < 5;i++) {
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	empty(arr1, size);
//	for (i = 0;i < 5;i++) {
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//}
#include<math.h>
int is_prime(int x) {
	int i = 0;
	for (i = 2;i <= sqrt(x);i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int i = 0;
	int ret = 0;
	for (i = 2;i <= 1000;i++) {
		ret = is_prime(i);
		if (ret == 1) {
			printf("%d\t", i);
		}
	}
	return 0;
}