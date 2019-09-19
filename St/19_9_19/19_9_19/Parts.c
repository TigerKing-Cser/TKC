/*
	加工的总零件数为370个
	如果甲加工的零件数多10
	如果乙加工的零件数少20
	如果丙加工的零件数乘以2
	如果丁加工的零件数除以2
	则四个人加工的零件数就相等啦
	求四个人加工的零件个数分别是多少?
*/
//#include<stdio.h>
//int main() {
//	int sum = 370;
//	int x;
//	for (x = 60; x < 120; x++) {
//		if (x - 10 + x + 20 + x / 2 + x * 2 == sum){
//			
//			printf("甲加工的零件数：%d", x - 10);
//			printf("乙加工的零件数：%d", x + 20);
//			printf("丙加工的零件数：%d", x * 2);
//			printf("丁加工的零件数：%d", x / 2);
//			break;
//		}
//	}
//	return 0;
//}
/*
鸡兔同笼问题
小鸡小兔子关在同一个笼子里
小鸡两只脚小兔子四只脚
小鸡+小兔子总数50只脚的总数160只
求小鸡和小兔子各多少只。
*/
#include<stdio.h>
int main() {
	int chicken;
	int rabbit;
	int sum = 50;
	int legsum = 160;
	for (rabbit = 1;rabbit < 50;rabbit++) {
		for (chicken = 49;chicken > 0;chiken++) {
			if (rabbit + chicken = sum && 2 * chicken + 4 * rabbit == legsum) {
				printf("鸡的数量是：%d", chicken);
				printf("兔的数量是：%d", rabbit);
			}
		}
	}
}