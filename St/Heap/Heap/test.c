#include"Heap.h"
#include<time.h>
void test() {
	Heap hp;
	InitHeap(&hp);
	HeapPush(&hp, 27);
	HeapPush(&hp, 15);
	HeapPush(&hp, 18);
	HeapPush(&hp, 34);
	HeapPush(&hp, 49);
	HeapPush(&hp, 65);
	HeapPush(&hp, 25);
	HeapPush(&hp, 19);
	HeapPush(&hp, 37);
	HeapPush(&hp, 28);
	HeapCreate(hp._a, 10);
	HeapPush(&hp, 6);
	HeapPop(&hp);
	HeapSort(&hp);
	HeapPrint(&hp);
}
int main() {
	
}