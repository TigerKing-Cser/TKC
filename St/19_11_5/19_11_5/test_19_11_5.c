#define _CRT_SECURE_NO_WARNINGS 1
/*
�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.

AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC
*/

#include<stdio.h>
#include<string.h>
#include<assert.h>
char* resever_str(char* left, char* right) {
	assert(left && right);
	char* ret = left;
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	return ret;
}
char* leftrorate(char* ch, int k) {
	assert(ch);
	if (k % strlen(ch) == 0) {
		return ch;
	}
	else {
		resever_str(ch, ch + k - 1);
		resever_str(ch + k, ch + strlen(ch) - 1);
		resever_str(ch, ch + strlen(ch) - 1);
	}
	return ch;
}
int main() {
	char ch[] = "ABCDE";
	char* ch1 = "BCDEA";
	int i = strlen(ch);
	int flag = 0;
	while (i--) {
		leftrorate(ch, 1);
		if (strcmp(ch, ch1) == 0) {
			flag = 1;
			break;
		}
		else;
	}
	if (flag == 1) {
		printf("����ת����ִ�");
	}
	else
		printf("������ת����ִ�");
	return 0;
}