#include "Stack.h"
void StackInit(Stack* ps)
{
	assert(ps);
	ps->_capacity = 0;
	ps->_top = 0;
	ps->_a = NULL;
}

void StackPush(Stack* ps, STDataType data)
{
	if (ps->_capacity == ps->_top) {
		ps->_capacity = ps->_capacity > 0 ? 2 * ps->_capacity : 4;
		ps->_a = (STDataType*)realloc(ps->_a, sizeof(STDataType) * ps->_capacity);
	}
	ps->_a[ps->_top] = data;
	ps->_top++;
}

void StackPop(Stack* ps)
{
	assert(ps);
	if (ps->_top > 0) {
		ps->_top--;
	}
}

STDataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->_a[ps->_top - 1];
}

int StackSize(Stack* ps)
{
	if (ps->_top == 0) {
		return 0;
	}
	return ps->_top - 1;
}

int StackEmpty(Stack* ps)
{
	if (ps->_top == 0) {
		return 1;
	}
	else return 0;
}

void StackDestroy(Stack* ps)
{
	assert(ps);
	ps->_capacity = 0;
	ps->_top = 0;
	free(ps->_a);
	ps->_a = NULL;
}
