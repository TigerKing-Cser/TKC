/*
����ͬ������
С��С���ӹ���ͬһ��������
С����ֻ��С������ֻ��С��+С��������50ֻ�ŵ�����160ֻ
��С����С���Ӹ�����ֻ��
*/
/*********************************************/
//#include<stdio.h>
//int main() {
//	int chicken = 0;
//	int rabbit = 0;
//	int sumleg = 160;
//	for (chicken = 1; chicken < 50;chicken++) {
//		rabbit = 50 - chicken;
//		if (2 * chicken + 4 * rabbit == sumleg) {
//			printf("��������:%d", chicken);
//			printf("�õ�����:%d", rabbit);
//		}
//	}
//	return 0;
//}
/*
ͨ��ѭ����Ѱ��λ���ֵ�ˮ�ɻ���
153�� > 1  5  3
1 + 125 + 27 == 153
100 - 999֮�䰤����������������������
153 370 371 407
*/
/*********************************************/
#include<stdio.h>
int Cube(int a) {
	return a * a * a;
}
int main() {
	int i = 100;
	for (i = 100;i < 1000;i++) {
		int x = i / 100;
		int y = i / 10 % 10;
		int z = i % 10;
		if (Cube(x) + Cube(y) + Cube(z) == i) {
			printf("%d\t", i);
		}
	}
	return 0;
}