#include"LinkList.h"

void test() {
	ListNode* L = ListCreate();
	ListPushBack(L, 5);
	ListPushBack(L, 4);
	ListPushBack(L, 3);
	ListPushBack(L, 2);
	ListPushBack(L, 1);
	ListPopBack(L);
	ListPopBack(L);
	ListPopBack(L);
	ListPopBack(L);
	ListPopBack(L);
	ListPushFront(L, 1);
	ListPushFront(L, 2);
	ListPushFront(L, 3);
	ListPushFront(L, 4);
	ListPushFront(L, 5);
	ListInsert(L->_next, 6);
	ListErase(L->_next);
	ListPrint(L);
	ListDestory(L);
}
int main() {
	test();
	return 0;
}