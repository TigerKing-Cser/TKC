#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	int score = 0;
	printf("输入学生成绩:");
	scanf("%d",&score);
	switch (score/10)
	{
	case 1:case 2:case 3: case 4:case 5:
		printf("不及格");
		break;
	case 6:
		printf("及格");
		break;
	case 7:
		printf("中");
		break;
	case 8:
		printf("良");
		break;
	case 9:
		printf("优");
		break;
	case 10:
		printf("满分");
		break;
	}
	return 0;
}