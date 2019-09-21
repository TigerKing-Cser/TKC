//#include <stdio.h>
//int main() { 
//	for (int i = 100; i < 200; i++)
//	{
//		int sign = 1;
//		for (int j = 2; j < i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				sign = 0;
//			}
//		}
//		if (sign != 0) {
//			printf("%d\t", i);
//		}
//	}
//			return 0;
//}
//#include <stdio.h>
//int main() {
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = i; j < 10; j++)
//		{
//			printf("%d*%d=%d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	for (int i = 1000; i < 2000; i++) {
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0 ) {
//			printf("%d\t", i);
//		}
//	}
//}
//#include<stdio.h>
//int main() {
//	int arr[10] = { 12,15,9,7,5,4,18,2,6,10 };
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (arr[i] > arr[j]) {
//				arr[i] = arr[i] ^ arr[j];
//				arr[j] = arr[i] ^ arr[j];
//				arr[i] = arr[i] ^ arr[j];
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a = 1;
//	int b = 2;
//	int t = a;
//	a = b;
//	b = t;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int arr[10] = { 12,15,9,7,5,4,18,2,6,10 };
//	int Max = arr[0];
//	for (int i = 1; i < 10; i++) {
//		if (Max < arr[i]) {
//			Max = arr[i];
//		}
//	}
//	printf("Max = %d", Max);
//	return 0;
//}
#include<stdio.h>
int main() {
	int x = 30;
	int y = 24;
	if (x > y) {
		for (int i = y; i > 2;i--) {
			if (y % i == 0 && x % i == 0) {
				printf("%d", i);
				break;
			}
		}
	}
	else {
		for (int i = x; i > 2;i--) {
			if (y % i == 0 && x % i == 0) {
				printf("%d", i);
				break;
			}
		}
	}
}