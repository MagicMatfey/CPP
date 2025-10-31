#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int i; 

	int j;

	for (i = n; i >= 1; i--)
	{
		for (j = n; j >= i; j--)
		{

			cout << j;

		}

		cout << "\n";

	}

}