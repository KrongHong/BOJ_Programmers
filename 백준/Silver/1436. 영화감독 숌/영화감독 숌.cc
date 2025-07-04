#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int input; // 입력 숫자
	int num = 0; // 종말의 수
	int compare_num = 0; // 종말의 수 6의 개수 비교하기 위한 숫자
	vector<int> digits;

	cin >> input;

	while (true) {
		num++; 
		digits.clear();

		int temp = num;
		if (temp == 0) {
			digits.push_back(0);
		}
		else {
			while (temp != 0) {
				digits.push_back(temp % 10);
				temp /= 10;
			}
		}
		reverse(digits.begin(), digits.end());

		bool sixTriple = false;
		int count = 0;
		for (int i = 0; i < digits.size(); i++) {
			if (digits[i] == 6) {
				count++;
				if (count >= 3) {
					sixTriple = true;
					break;
				}
			}
			else {
				count = 0;
			}
		}

		if (sixTriple) {
			compare_num++;
		}

		if (compare_num == input) {
			for (int i = 0; i < digits.size(); i++) {
				cout << digits[i];
			}
			break;
		}
	}
}