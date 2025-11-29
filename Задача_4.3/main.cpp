#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int const size = 5;
    int matrix[size][size];
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size; x++)
        {
            if (x == 4 || y == 0 || x == 0 || y == 4)
            {
                matrix[y][x] = 1;
            }
            else
            {
                matrix[y][x] = 0;
            }
            cout << matrix[y][x] << " ";
        }
        cout << "\n";
    }

    return 0;
}
