
#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

//

//int main()

//{

//	int age = 0;

//

//	if(age<16)

//	{

//		printf("����\n");

//		printf("����ȥ����\n");

//	}

//	else if(age>=16 && age<24)

//		printf("����\n");

//	else if(age>=24 && age<40)

//		printf("����\n");

//	else if(age>=40 && age<60)

//		printf("������\n");

//	else if(age>=60 && age<90)

//		printf("����\n");

//	else

//		printf("�ϲ���\n");

//

//

//	//if(age>=18)

//	//	printf("����\n");

//	//else

//	//	printf("δ����\n");

//

//	/*if(age>=18)

//		printf("����\n");

//	*/

//	return 0;

//}

//

//#include <stdio.h>

//int main()

//{

//	int a = 0;

//	int b = 2;

//	if(a == 1)

//	{

//		if(b == 2)

//			printf("hehe\n");

//		else

//			printf("haha\n");

//	}

//	return 0;

//}

//

//

//int main()

//{

//	char firstname[20];

//	char first_name[20];

//	char FirstName[20];

//	char First_Name[20];

//	/*int a = 10;

//	int i = 0;

//	for(i=0; i<10; i++)

//	{

//

//	}

//	*/

//	return 0;

//}





//int main()

//{

//	int age = 0;

//	//if(age = 5)

//	if(5 == age)

//		printf("�Ǻ�\n");

//

//	return 0;

//}

//

//int main()

//{

//	int i = 0;

//

//	for(i=1; i<=100; i+=2)

//	{

//		printf("%d ", i);

//	}

//

	//for(i=1; i<=100; i++)

	//{

	//	//�ж�i�Ƿ�Ϊ����

	//	if(1 == i%2)

	//	{

	//		printf("%d ", i);

	//	}

	//}
//
//	return 0;
//
//}



//

//int main()

//{

//	int day = 0;

//	scanf("%d", &day);

//	switch(day)

//	{

//	case 1:

//		printf("����1\n");

//		break;

//	case 2:

//		printf("����2\n");

//		break;

//	case 3:

//		printf("����3\n");

//		break;

//	case 4:

//		printf("����4\n");

//		break;

//	case 5:

//		printf("����5\n");

//		break;

//	case 6:

//		printf("����6\n");

//		break;

//	case 7:

//		printf("������\n");

//		break;

//	default:

//		break;

//	}

//	return 0;

//}





//

//int main()

//{

//	int day = 0;

//	scanf("%d", &day);

//	switch(day)

//	{

//	case 1:

//	case 2:

//	case 3:

//	case 4:

//	case 5:

//		printf("������\n");

//		break;

//	case 6:

//	case 7:

//		printf("��Ϣ��\n");

//		break;

//	default:

//		break;

//	}

//	return 0;

//}

//

//#include <stdio.h>

//

//int main()

//{

//	int n = 1;

//	int m = 2;

//	switch (n)

//	{

//	case 1:	m++;

//	case 2: n++;

//	case 3:

//		switch (n)

//		{//switch����Ƕ��ʹ��

//		case 1:n++;

//		case 2:m++;n++;break;

//		}

//	case 4:

//		m++;

//		break;

//	default:

//		break;

//	}

//	printf("m = %d, n = %d\n", m, n);

//	//4 3 -6

//	//4 4

//	//5 3

//	//4 2

//	//3 3

//	return 0;

//}



//int  main()

//{

//	while(1)

//	{

//		printf("hehe\n");

//	}

//

//	return 0;

//}

//

//int main()

//{

//	int i = 0;//��ʼ��

//	while(i<10)//�ж�

//	{

//		i++;//����

//		if(i==5)

//			continue;

//		printf("%d ", i);

//	}

//	//

//	return 0;

//}



//int main()

//{

//	//printf("hehe\n");

//	char name[20] = {0};

//	scanf("%s", name);

//	printf("name = %s\n", name);

//

//	getchar();

//	getchar();

//

//	return 0;

//}



//int main()

//{

//	int ch = 0;

//	//EOF -- END OF FILE

//	while((ch=getchar()) != EOF)

//	{

//			putchar(ch);

//	}

//	printf("hehe\n");

//

//	return 0;

//}

//





//

//int main()

//{

//	//int i = 1;//��ʼ��

//	//while(i<=10)//�ж�

//	//{

//	//	printf("%d ", i);

//

//	//	i++;//����

//	//}

//

//	int i = 0;

//	for(i=1; i<=10; i++)

//	{

//		if(i == 5)

//			continue;

//		printf("%d ", i);

//	}

//	//

//	return 0;

//}

//

//int main()

//{

//	int i = 0;

//	int j = 0;

//	for(; i<10; i++)

//	{

//		for(; j<10; j++)

//		{

//			printf("hehe\n");

//		}

//	}

//

//	/*int i = 0;

//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

//	for(i=0; i<10; i++)

//	{

//	printf("%d ", arr[i]);

//	}*/

//	/*int i = 0;

//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

//	for(i=0; i<=12; i++)

//	{

//	arr[i] = 0;

//	printf("hehe\n");

//	}*/

//	//<C�����ȱ��>

//

//// 	int i = 0;

//// 	for(i=0; i<10; i++)

//// 	{

//// 		i = 0;

//// 		printf("%d ", i);

//// 	}

//	return 0;

//}

//

//int main()

//{

//	int a = 10;

//	int b = 20;

//	int c = b = a+4;

//

//	return 0;

//}



//int main()

//{

//	int i = 1;

//	do

//	{

//		if(i == 5)

//			continue;

//		printf("%d ", i);

//		i++;

//	}

//	while(i<=10);

//	return 0;

//}
/*
����һ��n
��n�Ľ׳�
*/
/******************************************************/
//int main()

//{

//	int n = 0;

//	int i = 0;

//	int ret = 1;

//	scanf("%d", &n);

//	for(i=1; i<=n; i++)

//	{

//		ret *= i;

//	}

//	printf("ret = %d\n", ret);

//

//	return 0;

//}

/*
��1��+2��+3��+4��+5��+����+8��+9��+10��;
*/
/*****************************************************/
//int main()

//{

//	int n = 0;

//	int i = 0;

//	int ret = 1;

//	int sum = 0;

//	//1 2 6 = 9

//	for(n=1; n<=3; n++)

//	{

//		ret = 1;

//		for(i=1; i<=n; i++)

//		{

//			ret *= i;

//		}

//		sum += ret;

//	}

//	printf("sum = %d\n", sum);

//

//	return 0;

//}





//int main()
//
//{
//
//	int n = 0;
//
//	int i = 0;
//
//	int ret = 1;
//
//	int sum = 0;
//
//	//1 2 6 = 9
//
//	for (n = 1; n <= 10; n++)
//
//	{
//
//		ret *= n;
//
//		sum += ret;
//
//	}
//
//	printf("sum = %d\n", sum);
//
//
//
//	return 0;
//
//}
/* 
������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
*/
//#include<stdio.h>
//void change(int &x, int &y) {
//	int t = 0;
//	t = x;
//	x = y;
//	y = t;
//}
//int main() {
//	int a[5] = { 1,3,5,7,9 };
//	int b[5] = { 2,4,6,8,10 };
//	int i = 0;
//	for (; i<5; i++) {
//		change(a[i],b[i]);
//	}
//	for( i=0; i<5; i++){
//		printf("%d ", a[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
/* 
����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
*/
#include<stdio.h>
int main() {
	int sign = 1;
	double sum = 0.0;
	int i = 1;
	for (i = 1; i <= 100; i++) {

		sum = sum + sign * (1.0/i);
		sign = -sign;
	}
	printf("%lf",sum);
	return 0;
}