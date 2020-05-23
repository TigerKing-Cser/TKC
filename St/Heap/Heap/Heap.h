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
// 堆的构建
Heap* HeapCreate(HpDataType* a, size_t n);
// 堆的插入
void HeapPush(Heap* hp, HpDataType x);
// 堆的删除
void HeapPop(Heap* hp);
// 取堆顶的数据
HpDataType HeapTop(Heap* hp);
// 堆的判空
int HeapEmpty(Heap* hp);
// 堆的数据个数
int HeapSize(Heap* hp);

void HeapPrint(Heap* hp);
// 对数组进行堆排序
void HeapSort(Heap* hp);
// 堆的销毁
void HeapDestory(Heap* hp);

void PrintTopK(int* a, int n, int k);