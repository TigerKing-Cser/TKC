#include "Queue.h"

void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
}

void QueuePush(Queue* q, QDataType data)
{
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	newnode->_data = data;
	newnode->_next = NULL;
	if (q->_front == NULL) {
		q->_front = q->_rear = newnode;
	}
	else {
		q->_rear->_next = newnode;
		q->_rear = newnode;
	}
}

void QueuePop(Queue* q)
{
	assert(q);
	if (q->_front->_next == NULL) {
		free(q->_front);
	}
	else {
		QNode* p = q->_front->_next;
		free(q->_front);
		q->_front = p;
	}
}

QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->_front->_data;
}

QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->_rear->_data;
}

int QueueSize(Queue* q)
{
	assert(q);
	int count = 0;
	QNode* cur = q->_front;
	while (cur) {
		count++;
		cur = cur->_next;
	}
	return count;
}

int QueueEmpty(Queue* q)
{
	return q->_front == NULL ? 1 : 0;
}

void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->_front;
	while (cur) {
		QNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	q->_front = q->_rear = NULL;
}
