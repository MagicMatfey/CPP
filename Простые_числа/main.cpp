#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	bool is_not_simple = false;
	for (int i = 2; i <= n;i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				is_not_simple = true;
			}
		}
		if (!is_not_simple)
		{
			cout << i << "\n";
		}
		is_not_simple = false;
	}
	return 0;
}