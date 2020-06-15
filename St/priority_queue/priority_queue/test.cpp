#include<iostream>
#include<vector>
using namespace std;

#include"priority_queue.h"

int main() {
	wh::priority_queue<int,vector<int>,wh::less<int>> q;
	q.push(9);
	q.push(4);
	q.push(3);
	q.push(1);
	q.push(2);
	q.push(9);
	q.push(4);
	q.push(3);
	q.push(1);
	q.push(2);
	while (!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}
}