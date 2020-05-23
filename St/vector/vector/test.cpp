#include<iostream>
#include<vector>
#include<algorithm>

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

void test2() {
	vector<int> nums({-2,-2,1,1,-3,1,-3,-3,-4,-2 });
	
	sort(nums.begin(), nums.end());
	int i = 0, j = 1;
	while (j < nums.size()) {
		while (nums[i] == nums[j]) {
			j++;
		}
		nums.erase(nums.begin() + i, nums.begin() + j);
		i++;
	}
}
int main() {
	test2();
}