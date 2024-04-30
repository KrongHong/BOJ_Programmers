#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int sum = 0;
	int num;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
		{
			num = 3;
			sum += num;
		}

		else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
		{
			num = 4;
			sum += num;
		}

		else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
		{
			num = 5;
			sum += num;
		}

		else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
		{
			num = 6;
			sum += num;
		}

		else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
		{
			num = 7;
			sum += num;
		}

		else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
		{
			num = 8;
			sum += num;
		}

		else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
		{
			num = 9;
			sum += num;
		}
		
		else if (str[i] == 'W' || str[i] == 'X' || str[i] =='Y' || str[i] == 'Z')
		{
			num = 10;
			sum += num;
		}
	}

	cout << sum;
}