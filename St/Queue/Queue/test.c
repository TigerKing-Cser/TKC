#include "Queue.h"

void test() {
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	printf("%d\t", QueueBack(&q));
	printf("%d\t", QueueFront(&q));
	QueuePop(&q);
	QueuePop(&q);
	printf("%d\t", QueueBack(&q));
	printf("%d\t", QueueFront(&q));
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueueDestroy(&q);
	
}
int main() {
	test();
	return 0;
}