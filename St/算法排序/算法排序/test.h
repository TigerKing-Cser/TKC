
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


#define N 10

void InputData(int* d);//输入数据
void PrintData(int* d);//输出数据

void InsertSort(int* d);//直接插入排序
void ShellSort(int* d, int length);//希尔排序
void SelectSort(int* d, int len);//选择排序

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int num;
	int capacity;
}Heap, * pHeap;//创建堆
void HeapSort(HPDataType* d, int n);//堆排序
pHeap HeapCreat(HPDataType* d, int n);//创建大堆
void HeapDestory(pHeap hp);//销毁堆
void HeapPrint(Heap hp);//堆打印
void AdjustDown(HPDataType* a, int n, int root);//堆内渗透函数
