#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void init_contact(PContact pc) {
	pc->size = 0;
	return;
}
void add_contact(PContact pc) {
	if (pc->size == CMAX) {
		printf("通讯录已满，添加失败！");
	}
	info curinfo;
	printf("请输入联系人姓名:\n");
	scanf("%s", curinfo.name);
	printf("请输入联系人性别:\n");
	scanf("%s", curinfo.sex);
	printf("请输入联系人电话:\n");
	scanf("%s", curinfo.tele);
	printf("请输入联系人年龄:\n");
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
		printf("请输入你要删除的联系人:\n");
		scanf("%s", name);
		retindex = find_contact(pc, name);
		if (retindex == -1) {
			printf("此联系人不存在，请重新输入\n");
			flag = 1;
		}
		else
			flag = 0;
	}
	for (i = retindex; i < pc->size - 1; i++) {
		pc->data[i] = pc->data[i+1];
	}
	pc->size--;
	printf("删除成功！\n");
}
void mod_contact(PContact pc) {
	info curinfo;
	int i = 0;
	int retindex = 0;
	int flag = 1;
	while (flag) {
		printf("请输入要修改的联系人:\n");
		scanf("%s", curinfo.name);
		retindex = find_contact(pc, curinfo.name);
		if (retindex == -1) {
			printf("此联系人不存在，请重新输入:\n");
			flag = 1;
		}
		else
			flag = 0;
	}
	printf("请输入联系人性别:\n");
	scanf("%s", curinfo.sex);
	printf("请输入联系人电话:\n");
	scanf("%s", curinfo.tele);
	printf("请输入联系人年龄:\n");
	scanf("%d", &curinfo.age);
	pc->data[retindex] = curinfo;
}
void show_contact(PContact pc) {
	int i = 0;
	for (i = 0; i < pc->size; i++) {
		printf("==============第%d个人===============\n", i);
		printf("姓名:%s\n", pc->data[i].name);
		printf("性别:%s\n", pc->data[i].sex);
		printf("电话:%s\n", pc->data[i].tele);
		printf("年龄:%d\n", pc->data[i].age);
		printf("=====================================\n");
	}
}
void search_contact(PContact pc) {
	char name[NAME_MAX];
	int i = 0;
	printf("请输入你要查找的联系人:\n");
	scanf("%s", name);
	for (i = 0; i < pc->size; i++) {
		if (strcmp(pc->data[i].name, name) == 0) {
			printf("==============第%d个人===============\n", i);
			printf("姓名:%s\n", pc->data[i].name);
			printf("性别:%s\n", pc->data[i].sex);
			printf("电话:%s\n", pc->data[i].tele);
			printf("年龄:%d\n", pc->data[i].age);
			printf("=====================================\n");
		}
	}
}
