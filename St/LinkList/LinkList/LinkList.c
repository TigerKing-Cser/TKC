#include"LinkList.h"

void InitLinkList(LinkList** LL)
{
	*LL = NULL;
}

LinkList* BuyNode(ElementType ET) {
	LinkList* newnode = (LinkList*)malloc(sizeof(LinkList));
	newnode->e = ET;
	newnode->next = NULL;
	return newnode;
	}
void PushFront(LinkList** LL, ElementType ET)
{
	LinkList* newnode = BuyNode(ET);
	newnode->next = *LL;
	*LL = newnode;
}

void PushBack(LinkList** LL, ElementType ET)
{
	LinkList* newnode = BuyNode(ET);
	
	if (*LL == NULL) {
		*LL = newnode;
	}
	else {
		LinkList* tail = *LL;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void PrintList(LinkList* LL)
{
	LinkList* cur = LL;
	while(cur != NULL){
		printf("%d->", cur->e);
		cur = cur->next;
	}
	printf("NULL\n");
}

void PopFront(LinkList** LL)
{
	if (*LL == NULL) {
		return;
	}
	else if ((*LL)->next == NULL) {
		free(*LL);
		*LL = NULL;
	}
	else {
		LinkList* cur = *LL;
		*LL = (*LL)->next;
		free(cur);
		cur->next = NULL;
	}
}

void PopBack(LinkList** LL) {
	if (*LL == NULL) {
		return;
	}
	else if ((*LL)->next == NULL) {
		free(*LL);
		*LL = NULL;
	}
	else {
		LinkList* cur = *LL;
		LinkList* prev = NULL;
		while (cur->next != NULL) {
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		if (prev != NULL) {
			prev->next = NULL;
		}
	}
}

LinkList* SListFind(LinkList* L, ElementType x)
{
	LinkList* cur = L;
	while (cur) {
		if (cur->e == x) {
			return  cur;
		}
		else {
			cur = cur->next;
		}
	}
	return NULL;
}

void SListInsertAfter(LinkList* pos, ElementType x)
{
	assert(pos);

	LinkList* newnode = BuyNode(x);
	newnode->next =pos->next;
	pos->next = newnode;
}

void SListEraseAfter(LinkList* pos)
{
	LinkList* next = pos->next;
	if (next != NULL) {
		LinkList* nextnext = next->next;
		free(next);
		pos->next = nextnext;
	}
}


void destroyLinkList(LinkList** LL)
{
	LinkList* cur = *LL;
	while (cur) {
		*LL = (*LL)->next;
		free(cur);
		cur = *LL;
	}
}

