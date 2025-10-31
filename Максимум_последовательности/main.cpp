#include <iostream>
using namespace std;
int main()
{
	int input = 1000;
	int max = 0;
	cin >> max;
	int i = 1;
	int max_pos = 0;
	while (input != 0)
	{
		i++;
		cin >> input;
		if (input > max)
		{
			max_pos = i;
			max = input;
		}
	}
	cout << max << "\n" << max_pos << "\n";
	return 0;
}