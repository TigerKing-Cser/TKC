/*
����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�����Զ�����ˮ��
���ʵ�֡�
*/
#include<stdio.h>
int main(){
	int n = 20;
	int empty = n;
	int total = n;
	while (empty > 1) {
		total += (empty / 2);
		empty = empty / 2 + empty % 2;
	}
	printf("%d",total);
	return 0;
}