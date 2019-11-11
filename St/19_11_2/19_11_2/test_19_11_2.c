#define _CRT_SECURE_NO_WARNINGS 1 
/*
调整数组使奇数全部都位于偶数前面。

题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
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
//	printf("请输入数组大小:\n");
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
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);
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
	printf("请输入数组的行和列:\n");
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
	printf("请输入你要查找的数:\n");
	scanf("%d", &key);
	retlo = find_arr(arr, row, col, key, retlo);
	if (retlo.x == -1 && retlo.y == -1) {
		printf("输入数字不在数组中\n");
	}
	else {
		printf("%d %d", retlo.x, retlo.y);
	}
	return 0;
}