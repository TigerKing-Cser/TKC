#define _CRT_SECURE_NO_WARNINGS 1

/*
 µœ÷strcpy
*/
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* my_strcpy(char* dest,const char* src) {
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++);
//	return ret;
//}
//int main() {
//	char ch[] = "i am student";
//	char ch1[15];
//	printf("%s", my_strcpy(ch1, ch));
//}


#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src) {

	assert(dest && src);
	char* ret = dest;
	while (*dest) {
		dest++;
	}
//	while (*dest++);
	while (*dest++ = *src++)
	{

	}
	*dest = *src;
	return ret;
}
int main() {
	char ch1[15] = "hello";
	char ch2[15] = "world";
	printf("%s", my_strcat(ch1,ch2));
	return 0;
}
