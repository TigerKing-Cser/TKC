#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*写一个函数返回参数二进制中 1 的个数*/
//int count_one_bit(int x) {
//	int count = 0;
//	while (x) {
//		if (x & 1 == 1) {
//			count++;
//		}
//		x = x >> 1;
//	}
//	
//	return count;
//}
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d的二进制中1的个数为%d\n", i, count_one_bit(i));
//}
/*获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列*/

//int main() {
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	printf("输出奇数位的二进制序列:\n");
//	for (i = 32; i > 0; i-=2) {
//		printf("%d", n>>i&1);
//	}
//	printf("\n");
//	printf("输出偶数位的二进制序列:\n");
//	for (i = 31; i > 0; i -= 2) {
//		printf("%d", n >> i & 1);
//	}
//}
/*输出一个整数的每一位*/

//int main() {
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	for (i = 31; i >= 0; i--) {
//		printf("%d", x>>i&1);
//	}
//}

int main() {
	int m = 0;
	int n = 0;
	int i = 0;
	int a[32] = { 0 };
	int b[32] = { 0 };
	int count = 0;
	scanf("%d%d", &m, &n);
	for (i = 0; i <= 31; i++) {
		a[i] = m >> i & 1;
		b[i] = n >> i & 1;
		if (a[i] != b[i]) {
			count++;
		}
	}
	printf("%d", count);
}