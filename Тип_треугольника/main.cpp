#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

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
    return 0;
}
