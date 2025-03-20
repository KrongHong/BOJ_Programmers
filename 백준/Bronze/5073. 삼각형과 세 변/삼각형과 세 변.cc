#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int>arr(3);

	while (true) {
		for (int i = 0; i < 3; i++) {
			int num;
			cin >> num;
			arr[i] = num;
		}
		sort(arr.begin(), arr.end());
		int max_len = arr[2];
		int sum = arr[0] + arr[1];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			break;
		}
		else if (max_len < sum) {
			if (arr[0] == arr[1] && arr[1] == arr[2]) {
				cout << "Equilateral" << "\n";
			}
			else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[0] != arr[2]) {
				cout << "Scalene" << "\n";
			}
			else {
				cout << "Isosceles" << "\n";
			}
		}
		else {
			cout << "Invalid" << "\n";
		}

	}
}