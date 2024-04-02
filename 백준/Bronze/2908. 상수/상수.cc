#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string num1, num2;
	string chageNum1, chageNum2;
	cin >> num1 >> num2;

	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());

	if (num1 > num2)
	{
		cout << num1;
	}
	else if (num1 < num2)
	{
		cout << num2;
	}
}