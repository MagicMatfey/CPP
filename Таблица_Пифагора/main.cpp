#include <iostream>
using namespace std;

int main()
{
	int i;
	int j;
	for (i = 1; i <= 9; i++)
	{
		for ( j = 1; j <= 9; j++)
		{
			cout << i*j<<"\t";
		}
		cout << "\n";
		cout << "\n";
	}

	return 0;
}