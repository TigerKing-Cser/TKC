#include<iostream>
#include<list>
#include<cassert>

using namespace std;
#include"list.h"
void print_list(const list<int>& lt) {
	list<int>::const_iterator it = lt.cbegin();
	while (it != lt.cend()) {
		cout << *it << " ";
		it++;
	}
}


int main() {
	wh::test();
	std::list<int> l;
}