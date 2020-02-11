
#include<stdio.h>
#include<string.h>

#define NAME_MAX 100
#define SEX_MAX 20
#define TELE_MAX 15
#define CMAX 10

/*
 定义结构体
*/
typedef struct info {
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	int  age;
}info;

typedef struct Contact {
	info data[CMAX];
	int size;
}Contact,*PContact;

/*
声明通讯录功能  
1.增加一个联系人 
2.删除一个联系人 
3.查找一个联系人
4.修改一个联系人
5.显示
6.排序
*/
void add_contact(PContact pc);

void dele_contact(PContact pc);

int find_contact(PContact pc);

void mod_contact(PContact pc);

void show_contact(PContact pc);

void search_contact(PContact pc);

void sort_contact(PContact pc);
