#include <iostream>
using namespace std;
int main()
{
	int input = 1000;
	int max = 0;
	cin >> max;
	int max_count = 1;
	while (input != 0)
	{
		cin >> input;
		if (max == input)
		{
			max_count++;
		}
		if (input > max)
		{
			max_count = 1;
			max = input;
		}
	}
	cout << "\n" << max << "\n" << max_count;
	return 0;
}