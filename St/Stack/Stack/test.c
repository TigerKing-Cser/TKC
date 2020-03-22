#include"Stack.h"
test() {
	Stack p;
	StackInit(&p);
	StackPush(&p, 1);
	printf("%d", StackTop(&p));
	StackPush(&p, 2);
	printf("%d", StackTop(&p));
	StackPush(&p, 3);
	printf("%d", StackTop(&p));
	StackPush(&p, 4);
	printf("%d", StackTop(&p));
	StackPush(&p, 5);
	printf("%d", StackTop(&p));
	StackPop(&p);
	printf("%d", StackTop(&p));
	StackPop(&p);
	printf("%d", StackTop(&p));
	StackPop(&p);
	printf("%d", StackTop(&p));
	StackDestroy(&p);
	StackPop(&p);
}
int main() {
	test();
}