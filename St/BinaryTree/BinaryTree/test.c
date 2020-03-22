#include"BinaryTree.h"

int main() {
	char a[] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* bt = BinaryTreeCreate(a, 17, &i);
	BinaryTreePrevOrder(bt);
	printf("\n");
	BinaryTreeInOrder(bt);
	printf("\n");
	BinaryTreePostOrder(bt);
	printf("\n");
	printf("第4层节点个数:%d", BinaryTreeLevelKSize(bt, 4));
	printf("\n");
	BinaryTreeLevelOrder(bt);
	int c = BinaryTreeComplete(bt);
}