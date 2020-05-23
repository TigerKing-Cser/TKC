#include "Heap.h"

void InitHeap(Heap* hp) {
	hp->_a = NULL;
	hp->_capacity = 0;
	hp->_size = 0;
}

//向下调整算法
void adjust_down(HpDataType* a, size_t n, HpDataType root) {
	HpDataType parent = root;
	HpDataType child = parent * 2 + 1;
	while (child < n) {
		if ( child + 1 < n && a[child] > a[child + 1]) {
			child++;
		}
		if (a[parent] > a[child]) {
			HpDataType tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else {
			break;
		}
	}
}

Heap* HeapCreate(HpDataType* a, size_t n)
{
	int i = 0;
	for (i = (n / 2) - 1; i >= 0; i--) {
		adjust_down(a, n, i);
	}
}
void adjust_up(HpDataType* a, HpDataType child) {
	HpDataType parent = (child - 1) / 2;
	while (parent != child || a[parent] > a[child]) {
		HpDataType tmp = a[parent];
		a[parent] = a[child];
		a[child] = tmp;
		child = parent;
		parent = (child - 1) / 2;
	}
}
void HeapPush(Heap* hp, HpDataType x)
{
	if (hp->_size == hp->_capacity) {
		hp->_capacity = hp->_capacity > 0 ? hp->_capacity * 2 : 4;
		hp->_a = (HpDataType*)realloc(hp->_a, hp->_capacity * sizeof(HpDataType));
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	adjust_up(hp->_a, hp->_size - 1);
	
}

void HeapPop(Heap* hp)
{
	assert(hp);
	HpDataType end = hp->_size - 1;
	HpDataType tmp = hp->_a[end];
	hp->_a[end] = hp->_a[0];
	hp->_a[0] = tmp;
	hp->_size--;
	adjust_down(hp->_a, --end, 0);
}

HpDataType HeapTop(Heap* hp)
{
	assert(hp);
	return hp->_a[0];
}

int HeapEmpty(Heap* hp)
{
	return hp->_capacity == 0 ? 1 : 0;
}

int HeapSize(Heap* hp)
{
	return hp->_size;
}

void HeapPrint(Heap* hp)
{
	assert(hp);
	int i = 0;
	for (i = 0; i < hp->_size; i++) {
		printf("%d ", hp->_a[i]);
	}
}


void HeapSort(Heap* hp) {
	int end = hp->_size - 1;
	while (end >= 0) {
		HpDataType tmp = hp->_a[end];
		hp->_a[end] = hp->_a[0];
		hp->_a[0] = tmp;
		adjust_down(hp->_a, end--, 0);
	}
}

void PrintTopK(int* a, int n, int k)
{
	HeapCreate(a, k);
	int i = 0;
	for (i = k; i < n; i++) {
		if (a[i] > a[0]) {
			a[0] = a[i];
			adjust_down(a, k, 0);
		}
	}
	return a;
}
