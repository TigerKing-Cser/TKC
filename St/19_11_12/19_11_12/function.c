#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void init_contact(PContact pc) {
	pc->size = 0;
	return;
}
void add_contact(PContact pc) {
	if (pc->size == CMAX) {
		printf("ͨѶ¼���������ʧ�ܣ�");
	}
	info curinfo;
	printf("��������ϵ������:\n");
	scanf("%s", curinfo.name);
	printf("��������ϵ���Ա�:\n");
	scanf("%s", curinfo.sex);
	printf("��������ϵ�˵绰:\n");
	scanf("%s", curinfo.tele);
	printf("��������ϵ������:\n");
	scanf("%d", &curinfo.age);
	pc->data[pc->size] = curinfo;
	pc->size++;
}
int find_contact(PContact pc, char* name) {
	int i = 0;
	
	for (i = 0; i < pc->size; i++) {
		if (strcmp(name, pc->data[i].name) == 0) {
			return i;
		}
	}
	return -1;
}
void dele_contact(PContact pc) {
	char name[NAME_MAX];
	int i = 0;
	int retindex = 0;
	int flag = 1;
	while (flag) {
		printf("��������Ҫɾ������ϵ��:\n");
		scanf("%s", name);
		retindex = find_contact(pc, name);
		if (retindex == -1) {
			printf("����ϵ�˲����ڣ�����������\n");
			flag = 1;
		}
		else
			flag = 0;
	}
	for (i = retindex; i < pc->size - 1; i++) {
		pc->data[i] = pc->data[i+1];
	}
	pc->size--;
	printf("ɾ���ɹ���\n");
}
void mod_contact(PContact pc) {
	info curinfo;
	int i = 0;
	int retindex = 0;
	int flag = 1;
	while (flag) {
		printf("������Ҫ�޸ĵ���ϵ��:\n");
		scanf("%s", curinfo.name);
		retindex = find_contact(pc, curinfo.name);
		if (retindex == -1) {
			printf("����ϵ�˲����ڣ�����������:\n");
			flag = 1;
		}
		else
			flag = 0;
	}
	printf("��������ϵ���Ա�:\n");
	scanf("%s", curinfo.sex);
	printf("��������ϵ�˵绰:\n");
	scanf("%s", curinfo.tele);
	printf("��������ϵ������:\n");
	scanf("%d", &curinfo.age);
	pc->data[retindex] = curinfo;
}
void show_contact(PContact pc) {
	int i = 0;
	for (i = 0; i < pc->size; i++) {
		printf("==============��%d����===============\n", i);
		printf("����:%s\n", pc->data[i].name);
		printf("�Ա�:%s\n", pc->data[i].sex);
		printf("�绰:%s\n", pc->data[i].tele);
		printf("����:%d\n", pc->data[i].age);
		printf("=====================================\n");
	}
}
void search_contact(PContact pc) {
	char name[NAME_MAX];
	int i = 0;
	printf("��������Ҫ���ҵ���ϵ��:\n");
	scanf("%s", name);
	for (i = 0; i < pc->size; i++) {
		if (strcmp(pc->data[i].name, name) == 0) {
			printf("==============��%d����===============\n", i);
			printf("����:%s\n", pc->data[i].name);
			printf("�Ա�:%s\n", pc->data[i].sex);
			printf("�绰:%s\n", pc->data[i].tele);
			printf("����:%d\n", pc->data[i].age);
			printf("=====================================\n");
		}
	}
}
