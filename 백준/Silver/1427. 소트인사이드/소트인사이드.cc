#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int num;
	vector<int> arr;

	cin >> num;

	while (num != 0)
	{
		arr.push_back(num % 10);
		num /= 10;
	}

	sort(arr.begin(), arr.end(), greater<>());

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i];
	}

}