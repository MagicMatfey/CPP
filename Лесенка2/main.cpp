#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int i;
	int	j;
	for (i = 1; i <= n; i++)
	{
		for (j = n; j >= i; j--)
		{
			cout << j;
		}
		cout << "\n";
	}

	return 0;
}