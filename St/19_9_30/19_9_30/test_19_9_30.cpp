#include<stdio.h>

/*
写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
*/
/*****************************************************************/
//int DigitSum(int n) {
//	if (n > 9) {
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n % 10;
//}
//int main() {
//	int x = 1729;
//	printf("%d", DigitSum(x));
//}
/*
编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
*/
/**********************************************************/
void reverse_string(char* string) {
	if (*string == '\0'); {
		reverse_string(string + 1);
		printf("%d", *string);
	}
}
int main() {
	char ch[] = { "abcde" };ddd
	reverse_string(ch);
}