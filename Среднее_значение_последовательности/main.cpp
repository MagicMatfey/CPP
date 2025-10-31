#include <iostream>
using namespace std;
int main()
{
	int user_vvod;
	cin >> user_vvod;
	int i = 0;
	double itogo = 0;
	while (user_vvod != 0)
	{
		i++;
		itogo += user_vvod;
		cin >> user_vvod;
	}
	cout << itogo/i << "\n";
	return 0;
}