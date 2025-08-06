#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
	stack<int> st;

	for (int i = 0; i < N; i++) {
		string command;
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (command == "top") {
			if (st.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << st.top() << endl;
			}
		}
		else if (command == "size") {
			cout << st.size() << endl;
		}
		else if (command == "empty") {
			cout << st.empty() << endl;
		}
		else if (command == "pop") {
			if (st.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
	}
}