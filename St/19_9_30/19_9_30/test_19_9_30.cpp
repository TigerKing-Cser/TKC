#include<stdio.h>

/*
дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
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
��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
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