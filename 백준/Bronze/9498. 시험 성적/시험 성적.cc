#include <iostream>

using namespace std;

int main()
{
	int grade;

	cin >> grade;

	if (grade <= 100 && grade >= 90)
	{
		cout << "A";
	}
	else if (grade <= 89 && grade >= 80)
	{
		cout << "B";
	}
	else if (grade <= 79 && grade >= 70)
	{
		cout << "C";
	}
	else if (grade <= 69 && grade >= 60)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}
}