#include <iostream>

int main()
{
	int sec = 0;
	std::cin >> sec;
	int min = sec%3600 / 60;
	int hours = sec / 3600;
	std::cout << hours << ":" << min << ":" << sec % 60 << "\n";
	return 0;
}