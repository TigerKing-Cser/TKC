#include"SeqList.h"
void test() {
	SeqList SL;
	SeqListInit(&SL);
	SeqListPushBack(&SL, 1);
	SeqListPushBack(&SL, 2);
	SeqListPushBack(&SL, 3);
	SeqListPushBack(&SL, 4);
	SeqListPushBack(&SL, 5);
	SeqListPushFront(&SL, 5);
	SeqListPushFront(&SL, 4);
	SeqListPushFront(&SL, 3);
	SeqListPushFront(&SL, 2);
	SeqListPushFront(&SL, 1);
	SeqListPrint(&SL);
	printf("\n");
	SeqListPopFront(&SL);
	SeqListPrint(&SL);
	printf("\n");
	SeqListPopBack(&SL);
	SeqListPrint(&SL);
	printf("\n");
	printf("%d", SeqListFind(&SL,5));
	printf("\n");
	SeqListInsert(&SL, 0, 1);
	SeqListPrint(&SL);
	printf("\n");
	SeqListErase(&SL, 5);
	SeqListPrint(&SL);
}
int main() {
	test();
	return 0;
}