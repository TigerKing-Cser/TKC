#define _CRT_SECURE_NO_WARNINGS 1
/*
һ��������ֻ�����������ǳ���һ�Σ�
�����������ֶ����������Ρ�
�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
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
	printf("����������Ĵ�С:\n");
	scanf("%d",&n);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	find_different(arr, n);
}

