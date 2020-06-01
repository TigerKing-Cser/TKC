#include<vector>
#include<list>

namespace wh {
	template<class T, class Container>
	class stack {
	public:
		void push(const T& x) {
			_con.push_back(x);
		}

		void pop() {
			_con.pop_back();
		}

		int size() {
			return _con.size();
		}

		T& top() {
			return _con.back();
		}

		bool empty() {
			return _con.empty();
		}
	private:
		Container _con;
	};

	void test() {
		stack<int, vector<int>> st;
		st.push(1);
		st.push(2);
		st.push(3);
		st.push(4);
		while (!st.empty()) {
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
}