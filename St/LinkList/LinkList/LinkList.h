#pragma once

#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int ElementType;

typedef struct LinkList {
	ElementType e;
	struct LinkList* next;
}LinkList;

/*��ʼ������*/
void InitLinkList(LinkList** LL);
/*ͷ�巨*/
void PushFront(LinkList** LL, ElementType ET);
/*β�巨*/
void PushBack(LinkList** LL, ElementType ET);
/*��ӡ����*/
void PrintList(LinkList* LL);
/*ͷɾ��*/
void PopFront(LinkList** LL);
/*βɾ��*/
void PopBack(LinkList** LL);
/*��������*/
LinkList* SListFind(LinkList* L, ElementType x);
/*pos֮�����һ��ֵ*/
void SListInsertAfter(LinkList* pos, ElementType x);
/*ɾ��pos֮���ֵ*/
void SListEraseAfter(LinkList* pos);
/*��������*/
void destroyLinkList(LinkList** LL);
