#define _CRT_SECURE_NO_WARNINGS 1
/*
5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
*/
//#include<stdio.h>
//int main() {
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for(A = 1; A<=5; A++){
//		for (B = 1; B <= 5; B++) {
//			for (C = 1; C <= 5; C++) {
//				for (D = 1; D <= 5; D++) {
//					for (E = 1; E <= 5; E++) {
//						if ((((B != 2) && (A == 3)) == 1) || (((B == 2) && (A != 3)) == 1) == 1) {
//							if ((((B != 2) && (E == 4)) == 1) || (((B == 2) && (E != 4)) == 1) == 1) {
//								if ((((C != 1) && (D == 2)) == 1) || (((C == 1) && (D != 4)) == 1) == 1) {
//									if ((((C != 5) && (D == 3)) == 1) || (((C == 5) && (D != 3)) == 1) == 1) {
//										if ((((E != 4) && (A == 1)) == 1) || (((E == 4) && (A != 1)) == 1) == 1) {
//											if (A != B && A != C && A != D && A != E && B != C && B != D && B != E && C != D && C != E) {
//												printf("A�ǵ�%d��\n", A);
//												printf("B�ǵ�%d��\n", B);
//												printf("C�ǵ�%d��\n", C);
//												printf("D�ǵ�%d��\n", D);
//												printf("E�ǵ�%d��\n", E);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
/*
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
*/
//#include<stdio.h>
//int main() {
//	int x = 0;
//	for (x = 'A'; x <= 'D'; x++) {
//		if (((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D')) == 3) {
//			printf("������%c", x);
//		}
//	}
//}
#include<stdio.h>
#define MAX 100
int main() {
	int i = 0;
	int j = 0;
	int n = 0;
	int a[MAX][MAX] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		a[i][0] = 1;
		a[i][i] = 1;
		for (j = 0; j <= i; j++) {
			if (i >= 1 && j >= 1 ) {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
			printf("%d\t", a[i][j]);
		}
			printf("\n");
	}
}