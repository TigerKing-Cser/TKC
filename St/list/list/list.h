namespace wh {
	template<class T>
	struct _list_node {
		_list_node<T>* _prev;
		_list_node<T>* _next;
		T _data;
		_list_node(const T& x = T()) :_data(x), _prev(nullptr), _next(nullptr) {}
	};

	template<class T, class Ref, class Ptr>
	struct _list_iterator {
		typedef _list_node<T> Node;
		typedef _list_iterator<T, Ref, Ptr> self;
		Node* _node;
		_list_iterator(Node* node) :_node(node) {

		}

		Ref operator*() {
			return _node->_data;
		}

		Ptr operator->() {
			return &_node->data;
		}

		self& operator++() {
			_node = _node->_next;
			return *this;
		}

		self& operator++(int) {
			self* tmp = this;
			_node = _node->_next;
			return *tmp;
		}

		self& operator+(int n) {
			self* tmp = this;
			while (n--) {
				tmp->_node = tmp->_node->_next;
			}
			return *tmp;
		}

		self& operator-(int n) {
			self* tmp = this;
			while (n--) {
				tmp->_node = tmp->_node->_prev;
			}
			return *tmp;
		}

		bool operator!=(const self& it) {
			return _node != it._node;
		}

	};

	template<class T>
	class list {
		typedef _list_node<T> Node;
	private:
		Node* _head;
	public:
		typedef  _list_iterator<T, T&, T*> iterator;
		typedef  _list_iterator<T, const T&, const T*> const_iterator;
		list() {
			_head = new Node;
			_head->_prev = _head;
			_head->_next = _head;
		}

		list(const list<T>& lt) {
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			const_iterator it = lt.cbegin();
			while (it != lt.cend()) {
				push_back(*it);
				it++;
			}
		}

		list<T>& operator=(list<T> lt) {
			std::swap(_head, lt._head);
			return *this;
		}


		void push_back(const T& x) {
			Node* newnode = new Node(x);
			Node* tail = _head->_prev;
			tail->_next = newnode;
			newnode->_next = _head;
			newnode->_prev = tail;
			_head->_prev = newnode;
		}

		void insert(iterator pos, const T& x) {
			Node* cur = pos._node;
			Node* pos_prev = cur->_prev;
			Node* newnode = new Node(x);
			newnode->_prev = pos_prev;
			newnode->_next = cur;
			cur->_prev = newnode;
			pos_prev->_next = newnode;
		}

		iterator erase(iterator pos) {
			assert(pos != end());
			Node* cur = pos._node;
			Node* next = cur->_next;
			Node* prev = cur->_prev;
			delete cur;
			next->_prev = prev;
			prev->_next = next;
			return next;
		}

		void clear() {
			iterator it = begin();
			while (it != end()) {
				it = erase(it);
			}
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		iterator begin() {
			return _head->_next;
		}

		iterator end() {
			return _head;
		}

		const_iterator cbegin()const {
			return const_iterator(_head->_next);
		}

		const_iterator cend()const {
			return const_iterator(_head);
		}
	};
	void test() {
		list<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.insert(l.end(), 4);
		list<int> l1(l);
		list<int> l2;
		l2 = l1;
		list<int>::const_iterator it = l.cbegin();
		while (it != l.cend()) {
			cout << *it << " ";
			++it;
		}
		cout << endl;
		for (auto e : l1) {
			cout << e << " ";
		}
		cout << endl;
		for (auto e : l2) {
			cout << e << " ";
		}
	}
}