#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
/*
1.给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。
//
//*/
//int* twoSum(int* nums, int numsSize, int target){
//	int i = 0;
//	int j = 0;
//	int *ret = NULL;
//	for (i = 0; i<numsSize; i++){
//		for (j = 0; j<numsSize; j++){
//			if ((nums[i] + nums[j]) == target){
//				ret = (int *)malloc(2 * sizeof(int));
//				ret[0] = i;
//				ret[1] = j;
//				return ret;
//			}
//		}
//	}
//	return ret;
//}
////int main(){
////	int target = 9;
////	int i = 0;
////	int nums[] = { 2,7,11,15 };
////
////	int *ret =  twoSum(nums, 4,target);
////	printf("%d %d", ret[0], ret[1]);
////	return 0;
////}
///*
//2.判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
//*/
//int isPalindrome(int x){
//	int temp = 0;
//	double y = 0;
//	int begin = x;
//	if (begin<0){
//		return -1;
//	}
//	while (x != 0){
//		temp = x % 10;
//		x = x / 10;
//		y = temp + (y * 10);
//	}
//	if (begin == y){
//		return 1;
//	}
//	else{
//		return -1;
//	}
//}
/*
3.给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−2^31,  2^31 − 1]。
请根据这个假设，如果反转后整数溢出那么就返回 0。
*/
//计算机里： -2^23 = （1111）符号位  1000 0000 0000 0000 0000 0000 0000 0000
//int reverse(int x)
//{
//	int temp;
//	//int i;
//	long c = 0;
//
//	while (x != 0)
//	{
//		temp = x % 10;
//		x = x / 10;
//		c = temp + c * 10;
//		if (c>0x7fffffff || c<(signed int)0x80000000)
//		{
//			return 0;
//		}
//	
//	}
//
//
//	return c;
//
//}
//int main(){
//
//	printf("%d", reverse(-123));
//}
char *reverse_string(char *String,int len){
	char *string = String;
	int right = len - 2; //不用交换数组最后的\0
	int left = 0;
	int temp; //做交换的中间变量
	while (left < right){    //交换
		temp = string[left];
		string[left] = string[right];
		string[right] = temp;
		left++;
		right--;
	}
	return  string; 
}

	int main(){
		char arr[] = "jiaxinyu";
		int  len = sizeof(arr) / sizeof(arr[0]);
		reverse_string(arr,len);
		printf("%s", arr);
	}