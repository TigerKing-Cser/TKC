#define _CRT_SECURE_NO_WARNINGS
/*
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
*/
//#include<malloc.h>
//#include<stdio.h>
//typedef struct {
//	int x;
//	int y;
//}location;
//location find_arr(int** arr, int row, int col, int key, location lo,int ROW, int COL) {
//	int startx = row - ROW;
//	int starty = col - 1;
//	if (startx >= 0 || starty <= 0) {
//		lo.x = -1;
//		lo.y = -1;
//		return lo;
//	}
//	if (arr[startx][starty] == key)
//	{
//		lo.x = startx;
//		lo.y = starty;
//		return lo;
//	}
//	else if (arr[startx][starty] > key) {
//		find_arr(arr, row, col - 1, key, lo, ROW, COL);
//	}
//	else {
//		find_arr(arr, row + 1, col, key, lo, ROW, COL);
//	}
//
//}
//int main() {
//	int row = 0;
//	int col = 0;
//	int key = 0;
//	location retlo = { 0,0 };
//	printf("����������������:\n");
//	scanf("%d%d", &row, &col);
//	int** arr = (int**)malloc(sizeof(int*) * row);
//	for (int i = 0; i < row; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int) * col);
//		for (int j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int ROW = row;
//	int COL = col;
//	printf("��������Ҫ���ҵ���:\n");
//	scanf("%d", &key);
//	retlo = find_arr(arr, row, col, key, retlo, ROW, COL);
//	if (retlo.x == -1) {
//		printf("������û���������\n");
//	}
//	else {
//		printf("%d %d", retlo.x, retlo.y);
//	}
//	return 0;
//}
/*
ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
*/
#include<stdio.h>
#include<string.h>
char* resever_string(char* left, char* right) {
	char* ret = left;
	while (left < right) {
		int tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	return left;
}
char* left_rotate(char* ch, int n ) {
	char* ret = ch;
	if (n % strlen(ch) == 0) {
		return ch;
	}
	else {
		resever_string(ch, ch + n - 1);
		resever_string(ch + n , ch + strlen(ch) - 1);
		resever_string(ch, ch + strlen(ch) - 1);
	}
	return ret;
}
int main() {
	char ch[] = "ABCD";
	int n = 0;
	printf("��������ת����\n");
	scanf("%d",&n);

	printf("%s", left_rotate(ch, n));
}