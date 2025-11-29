#include <iostream>
using namespace std;
int main()
{
	int number = 0;
	cin >> number;
	int sum = 0;
	int i = 0;
	while (number > 0)
	{
		number /= 10;
		i++;
	}
	cout << i << "\n";
	return 0;
}