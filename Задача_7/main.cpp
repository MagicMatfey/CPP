
#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU");
    const int n = 20;
    int sum = 0;
    int sum2 = 0;
    int arr[n];
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 20 - 10;
        if (arr[i] < 0)
        {
            sum += arr[i];
        }
        if (arr[i] > 0)
        {
            sum2 += arr[i];
        }
        std::cout << arr[i] << "  ";
    }
    std::cout << "\n";
    if (abs(sum) > abs(sum2)){ std::cout << "Сумма отрицательных больше" << "\n"; }
    else if (abs(sum) < abs(sum2)) { std::cout << "Сумма положительных больше" << "\n"; }
    else { std::cout << "Суммы равны" << "\n"; }
    return 0;
}
