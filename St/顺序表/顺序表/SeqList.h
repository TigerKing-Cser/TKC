#pragma once


#include<stdio.h>
#include<assert.h>
#include<malloc.h>


typedef int ElemType;


typedef struct SeqList {
	ElemType* data;
	int size;			//	��Ч���ݵĸ���
	int capacity;		//	���������
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListDestory(SeqList* ps);

void SeqListPrint(SeqList* ps);
void SeqListPushBack(SeqList* ps, ElemType x);
void SeqListPushFront(SeqList* ps, ElemType x);
void SeqListPopFront(SeqList* ps);
void SeqListPopBack(SeqList* ps);
int SeqListFind(SeqList* ps, ElemType x);
void SeqListInsert(SeqList* ps, size_t pos, ElemType x);
void SeqListErase(SeqList* ps, size_t pos);