#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int score = 0;
	printf("����ѧ���ɼ�:");
	scanf("%d",&score);
	switch (score/10)
	{
	case 1:case 2:case 3: case 4:case 5:
		printf("������");
		break;
	case 6:
		printf("����");
		break;
	case 7:
		printf("��");
		break;
	case 8:
		printf("��");
		break;
	case 9:
		printf("��");
		break;
	case 10:
		printf("����");
		break;
	}
	return 0;
}