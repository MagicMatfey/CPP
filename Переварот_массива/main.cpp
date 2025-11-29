#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "¬ведите n" << "\n";
    int size = 0;
    cin >> size;
    const int n = 1000;
    int arr[n];
    int j = 0;
    cout << "¬ведите элементы массива начина€ с нуливово каждый в свою строчку" << "\n";
    for (int i = 0;i < size;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size/2; i++)
    {
        j = arr[i];
        arr[i] = arr[size-i-1];
        arr[size - i - 1] = j;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
