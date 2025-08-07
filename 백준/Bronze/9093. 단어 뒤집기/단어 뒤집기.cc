#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int T;
	cin >> T;
	cin.ignore(); // 버퍼 지우기

	stack<char> st; // char 타입으로 스택 저장
	string str;

	while (T--) {
		getline(cin, str); // 문자열 입력
		str += ' '; // 문자열 마지막에 공백 추가 why? 뒷쪽 공백으로 인식하기 때문에
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == ' ') { // 문자열에서 공백이 나오면 그 전의 스택에 쌓인 것들을 반대로 출력
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else {
				st.push(str[i]); // 공백 전까지 단어를 스택에 담는다.
			}
		}
		cout << endl;
	}
}