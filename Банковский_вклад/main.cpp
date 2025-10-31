#include <iostream>
using namespace std;
int main()
{
	double start_sum = 0;
	double target_sum = 0;
	double percent = 0;
	cin >> start_sum;
	cin >> percent;
	cin >> target_sum;
	percent = percent / 12;
	int i = 1;
	double itogo = start_sum;
	while (itogo < target_sum)
	{
		itogo += itogo / 100 * percent;
		cout <<i << " - " << itogo << "\n";
		i++;
	}
	return 0;
}