#pragma once

#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int ElementType;

typedef struct LinkList {
	ElementType e;
	struct LinkList* next;
}LinkList;

/*初始化链表*/
void InitLinkList(LinkList** LL);
/*头插法*/
void PushFront(LinkList** LL, ElementType ET);
/*尾插法*/
void PushBack(LinkList** LL, ElementType ET);
/*打印链表*/
void PrintList(LinkList* LL);
/*头删法*/
void PopFront(LinkList** LL);
/*尾删法*/
void PopBack(LinkList** LL);
/*查找链表*/
LinkList* SListFind(LinkList* L, ElementType x);
/*pos之后插入一个值*/
void SListInsertAfter(LinkList* pos, ElementType x);
/*删除pos之后的值*/
void SListEraseAfter(LinkList* pos);
/*销毁链表*/
void destroyLinkList(LinkList** LL);
