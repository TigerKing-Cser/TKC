/*
鸡兔同笼问题
小鸡小兔子关在同一个笼子里
小鸡两只脚小兔子四只脚小鸡+小兔子总数50只脚的总数160只
求小鸡和小兔子各多少只。
*/
/*********************************************/
//#include<stdio.h>
//int main() {
//	int chicken = 0;
//	int rabbit = 0;
//	int sumleg = 160;
//	for (chicken = 1; chicken < 50;chicken++) {
//		rabbit = 50 - chicken;
//		if (2 * chicken + 4 * rabbit == sumleg) {
//			printf("鸡的数量:%d", chicken);
//			printf("兔的数量:%d", rabbit);
//		}
//	}
//	return 0;
//}
/*
通过循环找寻三位数字的水仙花数
153— > 1  5  3
1 + 125 + 27 == 153
100 - 999之间挨个尝试满足上述规则数字
153 370 371 407
*/
/*********************************************/
#include<stdio.h>
int Cube(int a) {
	return a * a * a;
}
int main() {
	int i = 100;
	for (i = 100;i < 1000;i++) {
		int x = i / 100;
		int y = i / 10 % 10;
		int z = i % 10;
		if (Cube(x) + Cube(y) + Cube(z) == i) {
			printf("%d\t", i);
		}
	}
	return 0;
}