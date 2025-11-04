#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int const size = 4;
    int matrix[size][size];
    for (int y = 0 ;y < size;y++)
    {
        for (int x = 0; x < size;x++)
        {
            if (x == y)
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
