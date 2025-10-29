#include <iostream>
using namespace std;
int main()
{
	int tripleNumber;
	setlocale(LC_ALL, "RU");
	cin >> tripleNumber;
	int firstNumber = tripleNumber / 100;
	int secondNumber = (tripleNumber - (firstNumber * 100)) / 10;
	int trithnumber = ((tripleNumber - (firstNumber * 100)) - (secondNumber * 10)) / 1;
	cout << firstNumber + secondNumber + trithnumber << "\n";
	return 0;
}