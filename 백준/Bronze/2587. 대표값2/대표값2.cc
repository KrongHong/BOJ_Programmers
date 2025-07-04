#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> arr(5);
	int sum = 0;
	int mean;
	int middle;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr.begin(), arr.end());
	mean = sum / 5;
	middle = arr[2];

	cout << mean << '\n' << middle;
}