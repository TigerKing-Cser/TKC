#define _CRT_SECURE_NO_WARNINGS 1 
/*
��������ʹ����ȫ����λ��ż��ǰ�档

��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
*/
//#include<stdio.h>
//#include<malloc.h>
//void sort(int* arr,int len) {
//	int start = 0;
//	int end = len - 1;
//	while (start < end) {
//		while (arr[start] % 2 == 0) {
//			start++;
//		}
//		while (arr[end] % 2 == 1) {
//			end--;
//		}
//		int tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//}
//int main() {
//	int len;
//	int i = 0;
//	printf("�����������С:\n");
//	scanf("%d", &len);
//	int* arr = (int*)malloc(sizeof(int) * len);
//	for (i = 0; i < len; i++) {
//		scanf("%d", &arr[i]);
//	}
//	sort(arr,len);
//	for (i = 0; i < len; i++) {
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}
/*
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
*/
#include<stdio.h>
#include<malloc.h>
typedef struct {
	int x;
	int y;
}location;
location find_arr(int** arr, int row, int col, int key,location lo) {
	int startx = row - 1;
	int starty = 0;
	while (startx >= 0 && starty < col) {
		if (arr[startx][starty] == key) {
			lo.x = startx;
			lo.y = starty;
			return lo;
		}
		else if (arr[startx][starty] > key) {
			startx--;
		}
		else {
			starty++;
		}
	}
	lo.x = -1;
	lo.y = -1;
	return lo;
}
int main() {
	int row = 0;
	int col = 0;
	int i = 0;
	int j = 0;
	int key = 0;
	location retlo = { 0,0 };
	printf("������������к���:\n");
	scanf("%d%d", &row, &col);
	int** arr = (int**)malloc(sizeof(int*) * row);
	for (i = 0; i < row; i++) {
		arr[i] = (int*)malloc(sizeof(int) * col);
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("��������Ҫ���ҵ���:\n");
	scanf("%d", &key);
	retlo = find_arr(arr, row, col, key, retlo);
	if (retlo.x == -1 && retlo.y == -1) {
		printf("�������ֲ���������\n");
	}
	else {
		printf("%d %d", retlo.x, retlo.y);
	}
	return 0;
}