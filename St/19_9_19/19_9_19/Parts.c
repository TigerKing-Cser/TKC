/*
	�ӹ����������Ϊ370��
	����׼ӹ����������10
	����Ҽӹ����������20
	������ӹ������������2
	������ӹ������������2
	���ĸ��˼ӹ���������������
	���ĸ��˼ӹ�����������ֱ��Ƕ���?
*/
//#include<stdio.h>
//int main() {
//	int sum = 370;
//	int x;
//	for (x = 60; x < 120; x++) {
//		if (x - 10 + x + 20 + x / 2 + x * 2 == sum){
//			
//			printf("�׼ӹ����������%d", x - 10);
//			printf("�Ҽӹ����������%d", x + 20);
//			printf("���ӹ����������%d", x * 2);
//			printf("���ӹ����������%d", x / 2);
//			break;
//		}
//	}
//	return 0;
//}
/*
����ͬ������
С��С���ӹ���ͬһ��������
С����ֻ��С������ֻ��
С��+С��������50ֻ�ŵ�����160ֻ
��С����С���Ӹ�����ֻ��
*/
#include<stdio.h>
int main() {
	int chicken;
	int rabbit;
	int sum = 50;
	int legsum = 160;
	for (rabbit = 1;rabbit < 50;rabbit++) {
		for (chicken = 49;chicken > 0;chiken++) {
			if (rabbit + chicken = sum && 2 * chicken + 4 * rabbit == legsum) {
				printf("���������ǣ�%d", chicken);
				printf("�õ������ǣ�%d", rabbit);
			}
		}
	}
}