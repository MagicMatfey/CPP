#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    long long n = 0;
    int digitCount[10] = {0};
    int maxCount = 0;
    int maxDigit = -1;
    cin >> n;

    while (n > 0)
    {
        digitCount[n % 10] += 1;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (digitCount[i] > maxCount)
        {
            maxCount = digitCount[i];
            maxDigit = i;
        }
        else if (digitCount[i] == maxCount && i < maxDigit)
        {
            maxDigit = i;
        }
    }
    cout << maxDigit << "\n";
    return 0;
}
