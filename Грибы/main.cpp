#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");

    cout << "������ �����" << endl;

    int no;
    cin >> no;

    int last_two = no % 100;

    if (last_two >= 11 && last_two <= 19) {
        cout << "������" << endl;
    }
    else {
        int last_digit = no % 10;

        if (last_digit == 1) {
            cout << "����" << endl;
        }
        else if (last_digit >= 2 && last_digit <= 4) {
            cout << "�����" << endl;
        }
        else {
            cout << "������" << endl;
        }
    }
    return 0;
}