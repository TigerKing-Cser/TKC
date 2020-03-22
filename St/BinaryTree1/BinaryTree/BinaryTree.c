#include"BinaryTree.h"

BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] == '#') {
		return NULL;
	}
	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	root->_data = a[*pi];
	(*pi)++;
	root->_left = BinaryTreeCreate(a, n, pi);
	(*pi)++;
	root->_right = BinaryTreeCreate(a, n, pi);
	return root;
}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL) {
		return NULL;
	}
	free(root);
	BinaryTreeDestory(root->_left);
	BinaryTreeDestory(root->_right);
}

int BinaryTreeSize(BTNode* root)
{
	if (root == NULL) {
		return 0;
	}
	return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}

int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL) {
		return 0;
	}
	if (root->_left == NULL && root->_right == NULL) {
		return 1;
	}
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}

int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL) {
		return 0;
	}
	if (k == 1) {
		return 1;
	}
	return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
}

BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL) {
		return NULL;
	}
	if (root->_data == x) {
		return root;
	}
	BinaryTreeFind(root->_left, x);
	BinaryTreeFind(root->_right, x);
}

void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL) {
		return;
	}
	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL) {
		return;
	}
	BinaryTreeInOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->_right);
}

void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL) {
		return;
	}
	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	printf("%c ", root->_data);
}

void BinaryTreeLevelOrder(BTNode* root)
{
	if (root == NULL) {
		return;
	}
	Queue q;
	QueueInit(&q);
	if (root != NULL) {
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q)) {
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->_data);
		if (front->_left) {
			QueuePush(&q, root->_left);
		}
		if (front->_right) {
			QueuePush(&q, root->_right);
		}
	}
	QueueDestroy(&q);
}
