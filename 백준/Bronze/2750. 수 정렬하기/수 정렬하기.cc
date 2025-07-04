#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> arr(N); // vector 사이즈 설정

	for(int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << '\n';
	}
}