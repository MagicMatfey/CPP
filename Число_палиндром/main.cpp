#include <iostream>
using namespace std;
int main()
{
	int number = 0;
	cin >> number;
	int number0 = number;
	int num = 0;
	int n = 0;
	while (number > 0)
	{
		n = number % 10;
		number /= 10;
		num = num * 10 + n;
	}
	if (number0 == num)
	{
		cout << "Yes" << "\n";
	}
	else
	{
		cout << "No" << "\n";
	}
	return 0;
}