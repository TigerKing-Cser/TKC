#include"string.h"
using namespace test;
int main() {
	test::string s("ni hao ya");
	std::string s1("ni hao ya");
	s1.insert(8, "~~~");
	s.insert(8, "~~~");
	s.erase(8, 3);
	s1.erase(8, 3);
	cout << s << endl;
	cout << s1 << endl;
}