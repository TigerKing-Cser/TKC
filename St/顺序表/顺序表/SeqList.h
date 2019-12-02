#pragma once


#include<stdio.h>
#include<assert.h>
#include<malloc.h>


typedef int ElemType;


typedef struct SeqList {
	ElemType* data;
	int size;			//	有效数据的个数
	int capacity;		//	数组的容量
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