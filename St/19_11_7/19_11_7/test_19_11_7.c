/*
喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以多少汽水。
编程实现。
*/
#include<stdio.h>
int main(){
	int n = 20;
	int empty = n;
	int total = n;
	while (empty > 1) {
		total += (empty / 2);
		empty = empty / 2 + empty % 2;
	}
	printf("%d",total);
	return 0;
}