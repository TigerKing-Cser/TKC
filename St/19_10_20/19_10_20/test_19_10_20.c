#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
/*дһ���������ز����������� 1 �ĸ���*/
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
//	printf("%d�Ķ�������1�ĸ���Ϊ%d\n", i, count_one_bit(i));
//}
/*��ȡһ�������������������е�ż��λ������λ��
�ֱ��������������*/

//int main() {
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	printf("�������λ�Ķ���������:\n");
//	for (i = 32; i > 0; i-=2) {
//		printf("%d", n>>i&1);
//	}
//	printf("\n");
//	printf("���ż��λ�Ķ���������:\n");
//	for (i = 31; i > 0; i -= 2) {
//		printf("%d", n >> i & 1);
//	}
//}
/*���һ��������ÿһλ*/

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