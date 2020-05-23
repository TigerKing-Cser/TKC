#pragma once
#include <stdio.h>
#include<assert.h>

typedef int HpDataType;
typedef struct Heap
{
	HpDataType* _a;
	size_t      _size;
	size_t      _capacity;
}Heap;

void InitHeap(Heap* hp);
// �ѵĹ���
Heap* HeapCreate(HpDataType* a, size_t n);
// �ѵĲ���
void HeapPush(Heap* hp, HpDataType x);
// �ѵ�ɾ��
void HeapPop(Heap* hp);
// ȡ�Ѷ�������
HpDataType HeapTop(Heap* hp);
// �ѵ��п�
int HeapEmpty(Heap* hp);
// �ѵ����ݸ���
int HeapSize(Heap* hp);

void HeapPrint(Heap* hp);
// ��������ж�����
void HeapSort(Heap* hp);
// �ѵ�����
void HeapDestory(Heap* hp);

void PrintTopK(int* a, int n, int k);