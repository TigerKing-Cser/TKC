/*
模拟实现strstr
*/
//#include<stdio.h>
//char* my_strstr(const char* str1, const char* str2) {
//	const char* curstr1 = str1;
//	const char* curstr2 = str2;
//	while (*curstr2 != '\0') {
//		while (*curstr1 == *curstr2 && *curstr1 != '\0') {
//			curstr1++;
//			curstr2++;
//		}
//		if (*curstr2 == '\0') {
//			return str1;
//		}
//		else {
//			str1++;
//			curstr1 = str1;
//			curstr2 = str2;
//		}
//	}
//	return NULL;
//}
//int main() {
//	char ch1[] = "aaaaa67";
//	char ch2[] = "aaa6";
//
//	const char* ret = my_strstr(ch1, ch2);
//	printf("%s", ret);
//}
/*
实现strchr
*/
//#include<stdio.h>
//const char* my_strchr(const char* str, const char chr) {
//	const char* curstr = str;
//	while (*curstr != '\0') {
//		if (*curstr == chr) {
//			return curstr;
//		}
//		else
//			curstr++;
//	}
//	return NULL;
//}
//int main() {
//	char ch1[] = "abcdef";
//	char ch2 = 'h';
//	const char* ret = my_strchr(ch1, ch2);
//	printf("%s", ret);
//}
/*
实现strcmp
*/
#include<stdio.h>
int my_strcmp(const unsigned char* str1, const unsigned char*str2) {
	while (*str1 != '\0' || *str2 != '\0') {
		if (*str1 > * str2) {
			return 1;
			}
		else if (*str1 < *str2) {
			return -1;
		}
		else {
			str1++;
			str2++;
		}
	}
	return 0;
}
int main() {
	char ch1[] = "hello";
	char ch2[] = "hellowrold!";
	int ret = my_strcmp(ch1, ch2);
	printf("%d", ret);
}