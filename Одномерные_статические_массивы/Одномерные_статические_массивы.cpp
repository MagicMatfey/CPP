
#include <iostream>

int main(int argc, char* argv[])
{
    /*
     *  Массив - это структура данных, которая хранит набор элементов одного типа.
     *
     *  Одномерный массив - это массив с одним измерением. Например:
     */
    const int n = 10;
    int arr[n]; // Объявление одномерного массива размером в 10 элементов
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }

    return 0;
}
