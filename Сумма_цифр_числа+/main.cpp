#include <iostream>
using namespace std;
int main()
{
	int number = 0;
	cin >> number;
	int sum = 0;
	while (number > 9)
	{
		sum = 0;
		while (number > 0)
		{
			sum += number % 10;
			number /= 10;
		}
		number = sum;
	}
	cout << sum << "\n";
	return 0;
}