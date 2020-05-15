#include"AVLTree.hpp"

void TestAVLTree()
{
	//int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
	int a[] = { 30, 90, 60 };
	AVLTree<int, int> t;
	for (auto e : a)
	{
		t.insert(make_pair(e, e));
	}

	t.InOrder();
}

int main() {
	TestAVLTree();
}