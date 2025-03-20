#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int>arr(3);
	int num;
	for (int i = 0; i < 3; i++) {
		cin >> num;
		arr[i] = num;
	}
	sort(arr.begin(), arr.end());
	if (arr[2] < arr[0] + arr[1])
	{
		cout << arr[2] + arr[1] + arr[0];
	}
	else {
		arr[2] = arr[1] + arr[0] - 1;
		cout << arr[2] + arr[1] + arr[0];
	}

	return 0;
}