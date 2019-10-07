#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void move(int n, char A, char C) {
	printf("第%d次移动:%d----->%d", n, A, C);
}

void hanio(int n, char A, char B, char C) {
	if (n == 1) {
		move(n, A, C);
	}
	else if (n > 1) {
		hanio(n - 1, A, C, B);
		move(n, A, C);
		hanio(n - 1, B, A, C);
	}
}

int main() {
	int n = 0;
	char A = 'A';
	char B = 'B';
	char C = 'C';
	printf("请输入盘子个数:");
	scanf("%d", &n);
	if (n > 0) {
		hanio(n, A, B, C);
	}
}