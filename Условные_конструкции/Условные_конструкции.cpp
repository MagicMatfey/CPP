/*
    {true, false}

    >  больше
    <  меньше
    >= больше или равно
    <= меньше или равно
    == равно
    != не равно

    && логическое И
    || логическое ИЛИ
    !  отрицание
*/

#include <iostream>
using namespace std;

int main() {

    cout << "Задача Треугольник" << endl;

    int a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Не существует" << endl;
        return 0;
    }

    int max_side = a;
    if (b > max_side) max_side = b;
    if (c > max_side) max_side = c;

    int sum_squares;
    int max_square = max_side * max_side;

    if (max_side == a) {
        sum_squares = b * b + c * c;
    }
    else if (max_side == b) {
        sum_squares = a * a + c * c;
    }
    else {
        sum_squares = a * a + b * b;
    }

    if (sum_squares == max_square) {
        cout << "Прямоугольный" << endl;
    }
    else if (sum_squares > max_square) {
        cout << "Остроугольный" << endl;
    }
    else {
        cout << "Тупоугольный" << endl;
    }
    


    cout << "Задача Грибы" << endl;

    int n;
    cin >> n;

    int last_two = n % 100;

    if (last_two >= 11 && last_two <= 19) {
        cout << "грибов" << endl;
    }
    else {
        int last_digit = n % 10;

        if (last_digit == 1) {
            cout << "гриб" << endl;
        }
        else if (last_digit >= 2 && last_digit <= 4) {
            cout << "гриба" << endl;
        }
        else {
            cout << "грибов" << endl;
        }
    }

    cout << "Задача про котлеты" << endl;

    int n;
    int m;
    int k;

    cout << "Введите элементы в порядке n m k" << endl;
    cin >> n, m, k;
    cout << n/k*m*2 << endl;
    return 0;
}
