#include"LinkList.h"

void test() {
	LinkList* LST;
	InitLinkList(&LST);
	PushBack(&LST, 5);
	PushBack(&LST, 4);
	PushBack(&LST, 3);
	PushBack(&LST, 2);
	PushBack(&LST, 1);
	PrintList(LST);
	PushFront(&LST, 5);
	PushFront(&LST, 4);
	PushFront(&LST, 3);
	PushFront(&LST, 2);
	PushFront(&LST, 1);
	PrintList(LST);
	PopFront(&LST);
	PopFront(&LST);
	PopFront(&LST);
	PopFront(&LST);
	PopFront(&LST);
	PrintList(LST);
	PopBack(&LST);
	PopBack(&LST);
	PopBack(&LST);
	PopBack(&LST);
	PopBack(&LST);
	PrintList(LST);
	PushFront(&LST, 5);
	PushFront(&LST, 4);
	PushFront(&LST, 3);
	PushFront(&LST, 2);
	PushFront(&LST, 1);
	PrintList(LST);
	PrintList(SListFind(LST, 4));
	SListInsertAfter(LST, 2);
	SListEraseAfter(LST->next->next);
	PrintList(LST);
}
int main() {
	test();
	return 0;
}