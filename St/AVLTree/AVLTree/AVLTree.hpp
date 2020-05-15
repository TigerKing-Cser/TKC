#include<iostream>
#include<vector>
using namespace std;

template<class K, class V>
struct AVLTreeNode {
	AVLTreeNode(const pair<K, V>& kv) :_pLeft(nullptr), _pRight(nullptr), _pParent(nullptr), _kv(kv), _bf(0) {};
	AVLTreeNode<K, V>* _pLeft;
	AVLTreeNode<K, V>* _pRight;
	AVLTreeNode<K, V>* _pParent;

	int _bf;
	pair<K, V> _kv;
};

template<class K, class V>
class AVLTree {
	typedef AVLTreeNode<K, V> Node;
public:
	bool insert(const pair<K, V>& kv) {
		if (_root == nullptr) {
			_root = new Node(kv);
			return true;
		}
		Node* parent = nullptr;
		Node* cur = _root;
		while (cur) {
			if (cur->_kv.first > kv.first) {
				parent = cur;
				cur = cur->_pLeft;
			}
			else if (cur->_kv.first < kv.first) {
				parent = cur;
				cur = cur->_pRight;
			}
			else {
				return false;
			}
		}
		cur = new Node(kv);
		if (parent->_kv.first < kv.first) {
			parent->_pRight = cur;
			cur->_pParent = parent;
		}
		else if (parent->_kv.first > kv.first) {
			parent->_pLeft = cur;
			cur->_pParent = parent;
		}
		while (parent) {
			if (cur == parent->_pLeft) {
				parent->_bf--;
			}
			else {
				parent->_bf++;
			}
			if (parent->_bf == 0) {
				break;
			}
			else if (parent->_bf == 1 || parent->_bf == -1) {
				cur = parent;
				parent = parent->_pParent;
			}
			else if (parent->_bf == 2 || parent->_bf == -2) {
				if (parent->_bf == 2) {
					if (cur->_bf == 1) {
						RotateL(parent);
					}
					else if (cur->_bf == -1) {
						RotateRL(parent);
					}
				}
				if (parent->_bf == -2) {
					if (cur->_bf == -1) {
						RotateR(parent);
					}
					else if (cur->_bf == 1) {
						RotateLR(parent);
					}
				}
				break;
			}
		}
		return true;
	}
	void InOrder()
	{
		_InOrder(_root);
	}
private:
	Node* _root = nullptr;
	void RotateL(Node* parent) { //×óµ¥Ðý
		Node* subR = parent->_pRight;
		Node* subRL = subR->_pLeft;
		parent->_pRight = subRL;
		if (subRL) {
			subRL->_pParent = parent;
		}
		subR->_pLeft = parent;
		Node* pparent = parent->_pParent;
		parent->_pParent = subR;
		if (_root = parent) {
			_root = subR;
			subR->_pParent = nullptr;
		}
		else
		{
			if (pparent->_pLeft == parent) {
				pparent->_pLeft = subR;
			}
			else {
				pparent->_pRight = subR;
			}
			subR->_pParent = pparent;
		}
		parent->_bf = subR->_bf = 0;
	}
	void RotateR(Node* parent) {  //ÓÒµ¥Ðý
		Node* subL = parent->_pLeft;
		Node* subLR = subL->_pRight;
		parent->_pLeft = subLR;
		if(subLR){
			subLR->_pParent = parent;
		}
		subL->_pRight = parent;
		Node* pparent = parent->_pParent;
		parent->_pParent = subL;
		if (_root == parent) {
			_root = subL;
			subL->_pParent = nullptr;
		}
		else {
			if (pparent->_pLeft == parent) {
				pparent->_pLeft = subL;
			}
			else {
				pparent->_pRight = subL;
			}
			subL->_pParent = pparent;
		}
		parent->_bf = subL->_bf = 0;
	}

	void RotateLR(Node* parent) {
		Node* subL = parent->_pLeft;
		Node* subLR = subL->_pRight;
		int bf = subLR->_bf;
		RotateL(parent->_pLeft);
		RotateR(parent);

		if (bf == -1) {
			parent->_bf = 1;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else if (bf == 1) {
			parent->_bf = -1;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
		else {
			parent->_bf = 0;
			subL->_bf = 0;
			subLR->_bf = 0;
		}
	}

	void RotateRL(Node* parent) {
		Node* subR = parent->_pRight;
		Node* subRL = subR->_pLeft;
		int bf = subRL->_bf;
		RotateR(parent->_pRight);
		RotateL(parent);
		if (bf == -1) {
			parent->_bf = 0;
			subR->_bf = 1;
			subRL->_bf = 0;
		}
		else if (bf == 1) {
			parent->_bf = -1;
			subR->_bf = 0;
			subRL->_bf = 0;
		}
		else {
			parent->_bf = 0;
			subR->_bf = 0;
			subRL->_bf = 0;
		}
	}
	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;

		_InOrder(root->_pLeft);
		cout << root->_kv.first << ":" << root->_kv.second << endl;
		_InOrder(root->_pRight);
	}
};


