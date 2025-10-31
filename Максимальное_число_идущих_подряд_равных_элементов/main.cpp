#include <iostream>
using namespace std;
int main()
{
	int input = 1000;
	int input2 = 0;
	cin >> input2;
	int max_count = 1;
	int reserv = 1;
	while (input != 0)
	{
		cin >> input;
		if (input2 == input)
		{
			max_count++;
		}
		else if(input != 0)
		{
			if (reserv < max_count)
			{
				reserv = max_count;
			}
			max_count = 1; 
		}
		input2 = input;
	}
	cout << "\n" << reserv;
	return 0;
}