#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	int T;
	cin >> T;

	string ps; // 괄호 문자열
	stack<char> st;
	cin.ignore();

	while (T--)
	{
		getline(cin, ps);
		for (int i = 0; i < ps.size(); i++)
		{
			st.push(ps[i]);
			if (st.size() == 1 && st.top() == ')') {
				break;
			}
			else if (st.top() == ')') { // "())" 이렇게 나올경우 ')'만 남고 pop -> pop 진행 불가
				st.pop();
				st.pop();
			}
		}
		if (st.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
		while (!st.empty()) {
			st.pop();
		}
	}

	return 0;
}