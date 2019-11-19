/*
实现memcpy
*/
#include<stdio.h>
#include<assert.h>
void* my_memcpy(void* dest,const void* src, size_t num) {
	assert(dest && src);
	char* ret = (char*)dest;
	char* curdest = (char*)dest;
	const char* cursrc = (char*)src;
	int i = 0;
	while(num--){
		*curdest = *cursrc;
		curdest++;
		cursrc++;
	}
	return (void*)ret;
}
//typedef struct Student {
//	char name[50];
//	char sex[20];
//	char phone[15];
//	short age;
//}stu;
//int main() {
//	stu stu1 = { "zhangsan", "男", "123456789", 15};
//	stu stu2;
//	my_memcpy(&stu2, &stu1, sizeof(stu));
//	printf("%s\n%s\n%s\n%d", stu2.name, stu2.sex, stu2.phone, stu2.age);
//	return 0;
//}
/*
实现memmove
*/
//#include<stdio.h>
//#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t num) {
	assert(dest && src);
	char* curdest = (char*)dest;
	char* cursrc = (char*)src;
	int i = 0;
	if (cursrc < curdest && curdest < cursrc + num) {
		for (i = num - 1; i >= 0; i--) 
		{
			curdest[i] = cursrc[i];
		}
	}
	else 
	{
		for (size_t i = 0; i < num; i++) 
		{
			curdest[i] = cursrc[i];
		}
	}
	return dest;
}

int main() {
	int arr1[] = { 1,2,3,4,5,6,0,0,0,0,0 };
	

	int i =  0;
	my_memmove(arr1 + 3, arr1, 5 * sizeof(int));
	for (i = 0; i < 5; i++) {
		printf("%d", arr1[i]);
	}
	return 0;
}