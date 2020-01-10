#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
1.有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
请编程实现在第n年的时候，共有多少头母牛？ 
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。
2
4
5
0
样例输出
2
4
6
*/
//int fun_1(int n){
//	if (n == 1){
//		return 1;  //第一年共一头
//	}
//	else if (n == 2){
//
//		return 2; //第二年共有两头
//	}
//	else if (n==3){
//		return 3;//第三年共三头
//	}
//	else{
//		return fun_1(n - 1) + fun_1(n - 3);  //寻得规律
//	}
//
//}
//int main(){
//	int input ;
//	int arr[55] = {0};
//	int i = 0;
//	int len = 0;
//	int ret = 0;
//	do
//	{
//		scanf("%d", &input);
//		arr[i] = input;
//		i++;
//	} while (input);
//	i = 0;
//	printf("输出结果\n");
//	while (arr[i]){
//		ret = fun_1(arr[i]);
//		printf("%d\n", ret);
//		i++;
//	}
//	return 0;
//}
/*
2.字符串的输入输出处理。
输入
第一行是一个正整数N，最大为100。之后是多行字符串（行数大于N）， 每一行字符串可能含有空格，字符数不超过1000。
输出
先将输入中的前N行字符串（可能含有空格）原样输出，再将余下的字符串（不含有空格）以空格或回车分割依次按行输出。每行输出之间输出一个空行。
样例输入
2
www.dotcpp.com DOTCPP
A C M
D O T CPP
样例输出
www.dotcpp.com DOTCPP

A C M

D

O

T

CPP

*/
//void fun(char *p){
//	int len = 0;
//	int i = 0;
//	len = sizeof(p);
//	while (p[i]){
//		if (p[i] == ' '){
//			printf("\n");
//		}
//		else {
//			printf("%c", p[i]);
//		}
//
//		i++;
//		
//	}
//}
//int main(){
//	int N;
//	int i = 0; int j = 0; int flag = 0;
//	char arr[1000][1000] = { '0' };
//	scanf("%d", &N);
//	
//		for (i= 0; i < 1000; i++){
//			gets(arr[i]);
//			if (i >= N  &&  (!strcmp(arr[i],"#")) ){
//				break;
//			}
//		}
//	
//	for (j = 0; j < N; j++){
//		printf("%s\n", arr[j]);
//	}
//
//			fun(arr[3]);
//
//	return 0;
//}
/*
3.计算1999和2299有多少个比特位不同
*/
int main(){
	int flag = 0;
	int ret = 0;
	int i = 0;
	int a = 1999;
	int b = 2299;
	ret= a^b; //异或  记住异或就是取不同的意思 因为相同为0 不同为1  那么异或以后该数字比特位为1就代表
	          //该比特位是1999和2299不同的比特位
	for (i = 0; i < 32; i++){ 
		                        //循环设置32的原因是int类型数据为4个字节 4*8=32个比特位 
		if ((ret>>i) & 1){   //每次移动 i 位  其意思是用第i位和1逻辑与  如果结果为真说明该比特位为1
			                 //就用flag++ 记录
			flag++;
		}
	}
	printf("%d\n", flag); 
	return 0;
}