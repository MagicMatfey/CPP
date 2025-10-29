#include <iostream>
using namespace std;

int main()
{
    int tripleNumber;
    setlocale(LC_ALL, "RU");
    cin >> tripleNumber;
    int firstNumber = tripleNumber / 100;
    int secondNumber = tripleNumber / 10 % 10;
    int trithNumber = tripleNumber % 10;
    cout << firstNumber + secondNumber + trithNumber << "\n";
    return 0;
}
