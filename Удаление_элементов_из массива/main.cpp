#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int arr[n];
    int size = n;
    int j = 0;
    srand(time(NULL));
    for (int i = 0; i < n; ++i) 
    {
        arr[i] = rand() % 10 - 5;
        cout << arr[i] << " ";
    }
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < 0)
        {
            for (j = i;j < size-1;j++)
            {
                arr[j] = arr[j + 1];
            }
            size--;
            i--;
        }
    }
    cout << "\n";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
