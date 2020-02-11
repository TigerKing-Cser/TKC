
#include<stdio.h>
#include<string.h>

#define NAME_MAX 100
#define SEX_MAX 20
#define TELE_MAX 15
#define CMAX 10

/*
 ����ṹ��
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
����ͨѶ¼����  
1.����һ����ϵ�� 
2.ɾ��һ����ϵ�� 
3.����һ����ϵ��
4.�޸�һ����ϵ��
5.��ʾ
6.����
*/
void add_contact(PContact pc);

void dele_contact(PContact pc);

int find_contact(PContact pc);

void mod_contact(PContact pc);

void show_contact(PContact pc);

void search_contact(PContact pc);

void sort_contact(PContact pc);
