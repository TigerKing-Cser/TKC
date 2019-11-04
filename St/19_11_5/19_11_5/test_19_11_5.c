#define _CRT_SECURE_NO_WARNINGS 1
/*
判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.

AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC
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
		printf("是旋转后的字串");
	}
	else
		printf("不是旋转后的字串");
	return 0;
}