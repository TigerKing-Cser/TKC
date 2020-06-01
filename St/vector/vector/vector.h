#pragma once

namespace wh{
	template<class T>
	class vector {
	public:
		typedef T* iterator;
		typedef T* const_iterator;
		vector() : _start(0), _finish(0), _endofstorage(0) {}//缺省参数构造函数
		vector(const vector<T>& v) : _start(0), _finish(0), _endofstorage(0) {			//拷贝构造
			size_t cp = v.capacity();
			size_t sz = v.size();
			reserve(v.capacity());
			iterator it = begin();
			const_iterator vit = v.cbegin();
			while (vit != v.cend()) {
				*it++ = *vit++;
			}
			_finish = _start + sz;
			_endofstorage = _start + cp;
		} 

		vector<T>& operator=(vector<T> v) {
			this->swap(v);
			return *this;
		}

		T& operator[](size_t i) {
			assert(_start + i < _finish);
			return *(_start + i);
		}


		void push_back(const T& x) {
			if (_finish == _endofstorage) {
				size_t newcapacity = capacity() == 0 ? 2 : 2*capacity();
				reserve(newcapacity);
			}
			*_finish = x;
			++_finish;
		}
		void pop_back() {
			assert(_start < _finish);
			--_finish;
		}

		size_t capacity()const { return _endofstorage - _start; }
		size_t size()const { return _finish - _start; }


		void insert(iterator pos, const T& x) {
			assert(pos <= _finish || pos >= _start);
			if (_finish == _endofstorage) {
				size_t n = pos - _start;
				size_t newcapacity = capacity() == 0 ? 2 : 2 * capacity();
				reserve(newcapacity);
				pos = _start + n;
			}
			iterator end = _finish - 1;
			while (end >= pos) {
				*(end + 1) = *end;
				end--;
			}
			*pos = x;
			++_finish;
		}
	
		void erase(iterator pos) {
			assert(pos <= _finish || pos >= _start);
			iterator pos_next = pos + 1;
			while (pos_next <= _finish) {
				*pos++ = *pos_next++;
			}
			--_finish;
		}
		

		void reserve(size_t n) {
			if (n > capacity()) {
				T* tmp = new T[n];
				int sz = size();
				if (_start) {
					memcpy(tmp, _start, sizeof(T) * capacity());
					delete[] _start;
				}
				_start = tmp;
				_finish = _start + sz;
				_endofstorage = _start + n;
			}
		}

		void resize(size_t n, const T& val = T()) {
			if (n < size()) {
				_finish = _start + n;
			}
			if (n > capacity()) {
				T* tmp = new T[n];
				int sz = size();
				if (_start) {
					memcpy(tmp, _start, sizeof(T) * capacity());
					delete[] _start;
				}
				_start = tmp;
				_finish = _start + sz;
				while (_finish < _start + n) {
					*_finish++ = val;
				}
				_endofstorage = _start + n;
			}
		}
		iterator begin() { return _start; }
		iterator end() { return _finish; }
		const_iterator cbegin()const { return _start; }
		const_iterator cend()const { return _finish; }

		void swap(vector<T>& v)
		{
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_endofstorage, v._endofstorage);
		}
	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};
	void testd() {
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(5);
		v.push_back(4);
		v.push_back(3);
		v.push_back(6);
		vector<int> v1(v);
		vector<int> v2;
		v2 = v1;
		v2.push_back(7);
		v2.push_back(8);
		v2.push_back(9);
		v2.push_back(10);
		v2.push_back(11);
		v2.push_back(12);
		v.swap(v2);
	
		for(auto e : v){
			std::cout << e << " ";
		}
		std::cout << std::endl;
		for (auto e : v2) {
			std::cout << e << " ";
		}
	}
}

