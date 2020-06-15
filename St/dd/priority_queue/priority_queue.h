#include<vector>

namespace wh {
	template<class T, class Container = vector<T>>
	class priority_queue {
	public:
		
		void push(const T& x) {
			_con.push(x);
			AdjustUp(_con.size() - 1);
		}

		void pop() {
			_con pop();
			AdjustDown(0);
		}

		T& top() {
			return _con[0];
		}

		int size() {
			return _con.size();
		}

		bool empty() {
			return _con.empty();
		}
	private:
		Container _con;
		void AdjustUp(int child) {
			int parent = (child - 1) / 2;
			while (parent >= 0) {
				if (parent >= 0 && _con[child] > _con[parent]) {
					swap(_con[child], _con[parent]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else {
					break;
				}
			}
		}

		void AdjustDown(int root) {
			int child = (root * 2) + 1;
			int parent = root;
			while (child < _con.size()) {
				if (a[child] < a[child + 1]) {
					++child;
					swap(_con[parent], _con[child]);
					parent = child;
					child = (parent * 2) + 1;
				}
				else {
					break;
				}
			}
		}
	};
}