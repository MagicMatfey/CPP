#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const int n = 3;
    int arr[n][n];
    int arr2[n][n];
    int arr3[n][n];
    srand(time(NULL));
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; ++i)
        {
            arr[j][i] = rand() % 20 - 10;
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; ++i)
        {
            arr2[j][i] = rand() % 20 - 10;
            cout << arr2[j][i] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; ++i)
        {
            arr3[j][i] = arr[j][i] + arr2[j][i];
            cout << arr3[j][i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
