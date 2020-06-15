
namespace wh {
	template<class T, class Container = vector<T>, class compare = wh::less<T>>
	class priority_queue {
	public:

		void push(const T& x) {
			_con.push_back(x);
			AdjustUp(_con.size() - 1);
		}

		void pop() {
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();
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
			compare com;
			int parent = (child - 1) / 2;
			while (parent >= 0) {
				if (parent >= 0 && com(_con[child], _con[parent])) {
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
			compare com;
			while (child < _con.size()) {
				if (child + 1 < _con.size() && com(_con[child + 1], _con[child]))  {
					++child;
				}
				if (com(_con[child], _con[parent])) {
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
	
	template<class T>
	struct greater
	{
		bool operator()(const T& x1, const T& x2) {
			return x1 < x2;
		}
	};

	template<class T>
	struct less
	{
		bool operator()(const T& x1, const T& x2) {
			return x1 > x2;
		}
	};
}