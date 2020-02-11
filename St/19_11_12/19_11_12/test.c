#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"


menu() {
	printf("********* 1. add *********\n");
	printf("********* 2. del *********\n");
	printf("********* 3. mod *********\n");
	printf("********* 4. search ******\n");
	printf("********* 5. show ********\n");
	printf("********* 0. exit ********\n");
}
void test() {
	Contact ct;
	init_contact(&ct);
	int input = 1;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1 :
			add_contact(&ct);
			break;
		case 2 :
			dele_contact(&ct);
			break;
		case 3 :
			mod_contact(&ct);
			break;
		case 4 :
			search_contact(&ct);
			break;
		case 5:
			show_contact(&ct);
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}