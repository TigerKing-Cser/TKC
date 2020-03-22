#define  _CRT_SECURE_NO_WARNINGS 0

#include<iostream>
#include<cstring>
#include<cassert>

using namespace std;
namespace test {
	class string {
	public:
		typedef char* iterator;
		/*输入输出重载*/
		friend ostream& operator<<(ostream& _cout, const test::string& s);

		friend istream& operator>>(istream& _cin, test::string& s);

		/*构造函数*/
		string(const char* str = "") {
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		/*拷贝构造*/
		string(const string& s)
			:_str(nullptr)
			, _size(0)
			, _capacity(0)
		{
			string tmp(s._str);
			this->swap(tmp);
		}

		string& operator=(string s) {
			this->swap(s);
			return *this;
		}
		/*析构函数*/
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = 0;
			_capacity = 0;
		}
		// modify

		void PushBack(char c) {
			if (_size == _capacity) {
				size_t newcapacity = _capacity == 0 ? 2 : 2 * _capacity;
				reserve(newcapacity);
			}
			_str[_size] = c;
			_size++;
			_str[_size] = '\0';
		}

		string& operator+=(char c) {
			PushBack(c);
			return *this;
		}

		void Append(const char* str) {
			if (_size + strlen(str) > _capacity) {
				this->reserve(_size + strlen(str));
			}
			strcpy(_str + _size, str);
			_size += strlen(str);
		}

		string& operator+=(const char* str) {
			Append(str);
			return *this;
		}

		void clear() {
			string tmp("");
			delete[] _str;
			_str = new char[1];
			this->swap(tmp);
		}


		const char* c_str()const {
			char* ch = new char[strlen(_str) + 1];
			strcpy(ch, _str);
			return ch;
		}
		// capacity

		size_t size()const {
			return _size;
		}

		size_t capacity()const {
			return _capacity;
		}

		bool empty()const {
			if (_size == 0) {
				return 1;
			}
			else return 0;
		}
		void resize(size_t newSize, char c = '\0') {
			if (newSize > _size) {
				char* newstr = new char[newSize + 1];
				strcpy(newstr, _str);
				delete[] _str;
				_str = newstr;
				_capacity = newSize;
			}
		}


		void reserve(size_t newCapacity) {
			if (newCapacity > _capacity) {
				char* newstr = new char[newCapacity + 1];
				strcpy(newstr, _str);
				delete[] _str;
				_str = newstr;
				_capacity = newCapacity;
			}
		}

		// access
		char& operator[](size_t index) {
			return this->_str[index];
		}

		const char& operator[](size_t index)const {
			return this->_str[index];
		}

		//relational operators

		bool operator>(const string& s) {
			int len = 0;
			while (len != size() && len != s.size()) {
				if (_str[len] > s._str[len]) {
					return 1;
				}
				len++;
			}
			if (len == s.size() && len != size()) {
				return 1;
			}
			return 0;
		}

		bool operator<=(const string& s) {
			return (*this < s)||(*this == s);
		}

		bool operator<(const string& s) {
			return !(*this > s || *this == s);
		}

		bool operator>=(const string& s) {
			return (*this > s) || (*this == s);
		}

		bool operator==(const string& s) {
			int len = 0;
			while (len != size() || len != s.size()) {
				if (_str[len] != s._str[len]) {
					return 0;
				}
				len++;
			}
			if (len != size() || len != s.size()) {
				return 0;
			}
			return 1;
		}

		bool operator!=(const string& s) {
			return !(*this == s);
		}

		// iterator

		iterator begin() {
			return _str;
		}

		iterator end() {
			return _str + _size;
		}
		
		// 返回c在string中第一次出现的位置
		size_t find(const char c, size_t pos = 0) const {
			if (pos < 0 || pos > _size) {
				return -1;
			}
			char* p = strchr(_str + pos, c);
			if (p) {
				return p - _str;
			}
			return -1;
		}

		size_t find(const char* str, size_t pos = 0) const {
			if (pos < 0 || pos > _size) {
				return -1;
			}
			char* p = strstr(_str + pos, str);
			if (p) {
				return p - _str;
			}
			return -1;
		}

		size_t find(const string str, size_t pos = 0) const {
			if (pos < 0 || pos > _size) {
				return -1;
			}
			char* p = strstr(_str + pos, str._str);
			if (p) {
				return p - _str;
			}
			return -1;
		}
		// 在pos位置上插入字符c/字符串str，并返回该字符的位置
		string& insert(size_t pos, char c) {
			assert(!(pos < 0 || pos > _size));
			if (_size == _capacity) {
				int new_capacity = _capacity > 0 ? 2 * _capacity : 4;
				reserve(new_capacity);
			}
			int end = _size;
			while (end >= (int)pos) {
				_str[end + 1] = _str[end];
				end--;
			}
			_str[pos] = c;
			++_size;
			return *this;
		}

		string& insert(size_t pos, const char* str) {
			assert(!(pos < 0 || pos > _size));
			if (_size + strlen(str) > _capacity) {
				reserve(_size + strlen(str));
			}
			int end = _size;
			while (end >= (int)pos) {
				_str[end + strlen(str)] = _str[end];
				end--;
			}
			int i = pos;
			int j = 0;
			while (i < pos + strlen(str)) {
				_str[i] = str[j];
				j++;
				i++;
			}
			return *this;
		}

		string& erase(size_t pos, size_t len) {
			assert(!(pos < 0 || pos > _size));
			int begin = pos;
			while (begin <= pos + len) {
				_str[begin] = _str[begin + len];
				begin++;
			}
			return *this;
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		void swap(string& s) {
			std::swap(this->_str, s._str);
			std::swap(this->_capacity, s._capacity);
			std::swap(this->_size, s._size);
		}
	};
}

ostream& test::operator<<(ostream& _cout, const test::string& s) {
	_cout << s._str;
	return _cout;
}

istream& test::operator>>(istream& _cin, test::string& s) {
	string tmp("");
	while (1) {
		char ch;
		ch = _cin.get();
		if (ch == '\n' || ch == ' ') {
				break;
		}
		tmp += ch;
	}
	swap(tmp._str, s._str);
	return _cin;
}