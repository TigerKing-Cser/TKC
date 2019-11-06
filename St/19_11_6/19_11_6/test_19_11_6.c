#define _CRT_SECURE_NO_WARNINGS 1
/*
一个数组中只有两个数字是出现一次，
其他所有数字都出现了两次。
找出这两个只出现一次的数字，编程实现。
*/
#include<stdio.h>
#include<malloc.h>
void find_different(int* arr, int n) {
	int ret = 0;
	int i = 0;
	int num1 = 0;
	int num2 = 0;
	int index = 0;
	for (i = 0; i < n; i++) {
		ret ^= arr[i];
	}
	for (i = 0; i < 32; i++) {
		if ((ret >> i) && 1 == 1) {
			index = i;
			break;
		}
	}
	for (i = 0; i < n; i++) {
		if (((arr[i] >> index) & 1 ) == 1) {
			num1 ^= arr[i];
		}
		else {
			num2 ^= arr[i];
		}
	}
	printf("%d %d\n", num1, num2);
}

int main() {
	int i = 0;
	int n;
	printf("请输入数组的大小:\n");
	scanf("%d",&n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	find_different(arr, n);
}

