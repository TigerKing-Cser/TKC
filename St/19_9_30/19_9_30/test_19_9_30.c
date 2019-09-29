
#include<stdio.h>\

#include<string.h>
/*
写一个递归函数Digitsum(n)，输入一个非负整数，返回组成它的数字之和
例如Digitsum(1729),则应该返回1+7+2+9,它的和是13
*/
//int Digitsum(int n) {
//	if (n > 9) {
//		return Digitsum(n / 10) + n % 10;
//	}
//	if (n < 9) {
//		return n;
//	}
//}
//int main() {
//	int x = 1345;
//	printf("%d", Digitsum(x));
//}
/*
编写一个函数reverse_string(char* string) (递归实现)
实现:将参数字符串中的字符反向排列			e+string(abcd) ed+string(abc) edc+string(ab)
要求:不能使用C函数库中的字符串操作函数
*/
void reverse_string(char* str) {
	int length = 0;
	length = strlen(str);
	if(length == 1)
		printf("%c", str[0]);
	else {
		reverse_string(str + 1);
		printf("%c", str[0]);
	}
}
int main() {
	char ch[] = { "abcde" };
	reverse_string(ch);
}