#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	int x;
	int y;
	std::cin >> x;
	std::cin >> y;
	if (x > 0 && y > 0)
	{
		std::cout << "I";
	}
	else if (x<0&&y>0)
	{
		std::cout << "II";
	}
	else if (x < 0 && y<0)
	{
		std::cout << "III";
	}
	else if (x > 0 && y<0)
	{
		std::cout << "IV";
	}
	else
	{
		std::cout << "На оси";
	}

	return 0;
}