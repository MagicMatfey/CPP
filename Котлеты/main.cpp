#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Задача про котлеты" << endl;

    int n;
    int m;
    int k;

    cout << "Введите элементы в порядке k m n" << endl;
    cin >> k;
    cin >> m;
    cin >> n;
    if (k != 0)
    {
        if (n <= k)
        {
            cout <<m * 2 << endl;
        }
        else if (2*n%k == 0)
        {
            cout << (2*n/k)*m << endl;
        }
        else
        {
            cout << (2*n/k + 1)*m << endl;
        }


    }
    else
    {
        cout << 0 << endl;
    }
    
    return 0;
}