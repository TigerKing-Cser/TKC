
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


#define N 10

void InputData(int* d);//��������
void PrintData(int* d);//�������

void InsertSort(int* d);//ֱ�Ӳ�������
void ShellSort(int* d, int length);//ϣ������
void SelectSort(int* d, int len);//ѡ������

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int num;
	int capacity;
}Heap, * pHeap;//������
void HeapSort(HPDataType* d, int n);//������
pHeap HeapCreat(HPDataType* d, int n);//�������
void HeapDestory(pHeap hp);//���ٶ�
void HeapPrint(Heap hp);//�Ѵ�ӡ
void AdjustDown(HPDataType* a, int n, int root);//������͸����
