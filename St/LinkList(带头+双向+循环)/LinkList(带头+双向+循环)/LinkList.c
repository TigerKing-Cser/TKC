#include"LinkList.h"

ListNode* ListCreate()
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	head->_next = head;
	head->_prev = head;
	return head;
}

void ListDestory(ListNode* plist)
{
	ListNode* cur = plist->_next;
	while (cur != plist) {
		ListNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	free(plist);
}

void ListPrint(ListNode* plist)
{
	assert(plist);
	ListNode* cur = plist->_next;
	while (cur != plist) {
		printf("%d->", cur->_data);
		cur = cur->_next;
	}
	printf("\n");
}

void ListPushBack(ListNode* plist, LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->_data = x;
	newnode->_next = NULL;
	newnode->_prev = NULL;
	ListNode* tail = plist->_prev;
	newnode->_prev = tail;
	tail->_next = newnode;
	newnode->_next = plist;
	plist->_prev = newnode;
}

void ListPopBack(ListNode* plist)
{
	ListNode* tail = plist->_prev;
	ListNode* tail_prev = tail->_prev;
	tail_prev->_next = plist;
	plist->_prev = tail_prev;
	free(tail);
}

void ListPushFront(ListNode* plist, LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->_data = x;
	newnode->_next = NULL;
	newnode->_prev = NULL;
	ListNode* first = plist->_next;
	newnode->_next = first;
	newnode->_prev = plist;
	plist->_next = newnode;
	first->_prev = newnode;
}

void ListPopFront(ListNode* plist)
{
	ListNode* first = plist->_next;
	ListNode* second = first->_next;
	plist->_next = second;
	second->_prev = plist;
	free(first);
}

ListNode* ListFind(ListNode* plist, LTDataType x)
{
	ListNode* cur = plist;
	while (cur != plist){
		if (cur->_data == x) {
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->_data = x;
	newnode->_next = NULL;
	newnode->_prev = NULL;
	ListNode* pos_prev = pos->_prev;
	newnode->_next = pos;
	newnode->_prev = pos_prev;
	pos->_prev = newnode;
	pos_prev->_next = newnode;
}

void ListErase(ListNode* pos)
{
	ListNode* pos_prev = pos->_prev;
	ListNode* pos_next = pos->_next;
	pos_prev->_next = pos_next;
	pos_next->_prev = pos_prev;
	free(pos);
}
