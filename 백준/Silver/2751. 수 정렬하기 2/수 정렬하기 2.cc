#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N; // 입력할 숫자의 개수
	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < arr.size(); i++)
	{
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << '\n';
	}
}