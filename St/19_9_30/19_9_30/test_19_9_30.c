
#include<stdio.h>\

#include<string.h>
/*
дһ���ݹ麯��Digitsum(n)������һ���Ǹ����������������������֮��
����Digitsum(1729),��Ӧ�÷���1+7+2+9,���ĺ���13
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
��дһ������reverse_string(char* string) (�ݹ�ʵ��)
ʵ��:�������ַ����е��ַ���������			e+string(abcd) ed+string(abc) edc+string(ab)
Ҫ��:����ʹ��C�������е��ַ�����������
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