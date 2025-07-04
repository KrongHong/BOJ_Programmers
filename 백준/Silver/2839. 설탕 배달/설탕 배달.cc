#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N; // 입력 받는 숫자
	int sol; // 몫
	int remain; // 나머지
	vector<int> result;

	cin >> N;

	// 5를 한번도 사용하지 않을 때
	sol = N / 3;
	remain = N % 3;
	if (remain == 0) {
		result.push_back(sol);
	}
	else {
		result.push_back(-1);
	}

	// 5를 1 ~ 여러번 사용할 때
	for (int i = 1; i <= (N / 5); i++) {
		remain = N - 5 * i;

		if (remain == 0) {
			result.push_back(i);
		}
		else if (remain == 3) {
			result.push_back(i + 1);
		}
		else {
			int sol1 = remain / 3;
			remain = remain % 3;
			if (remain == 0) {
				result.push_back(i + sol1);
			}
			else {
				result.push_back(-1);
			}
		}
	}

	result.erase(
		remove(result.begin(), result.end(), -1),
		result.end()
	);

	if (result.empty()) {
		cout << -1;
	}
	else {
		cout << *min_element(result.begin(), result.end());
	}
}