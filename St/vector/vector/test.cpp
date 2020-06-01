#include<iostream>
#include<vector>
#include<algorithm>
#include<cassert>
#include"vector.h"

using namespace std;
/*��������  ���ַ�ʽ
	1.ʹ��[]����
	2.ʹ�õ�����iterator
	3.ʹ�÷�Χfor
*/
void test1() {
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(2);
	v1.push_back(3);
	
	sort(v1.begin(), v1.end());
	/* ���غ���[] */
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << ' ';
	}
	cout << endl;

	/* ������ */
	vector<int>::iterator it = v1.begin();
	while (it != v1.end()) {
		cout << *it << ' ';
		it++;
	}
	cout << endl;
	/*���������*/
	vector<int>::reverse_iterator rit = v1.rbegin();
	while (rit != v1.rend()) {
		cout << *rit << ' ';
		rit++;
	}
	cout << endl;

	/*const������*/
	vector<int>::const_iterator cit = v1.cbegin();
	while (cit != v1.cend()) {
		cout << *cit << ' ';
		cit++;
	}
	cout << endl;
	/*��Χfor*/
	for (auto a : v1) {
		cout << a << ' ';
	}
	cout << endl;

	
}

void test() {
	/*������ʧЧ*/
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	vector<int>::iterator it = v.begin();
	v.push_back(6); 
	v.push_back(6); 
	v.push_back(6); // ������ʧЧ��   push_back  insert  resize  reserve �Ƚӿڶ��ᵼ�µ�������ʧЧ

	while(it != v.end()) {
		cout << *it << " ";
		it++;
	}
}
void testd1() {
	string s1("+42");
	string s2("42");
	int i = s1 >= s2;
	cout << i << endl;
}
int main() {
	wh::testd();
	
}