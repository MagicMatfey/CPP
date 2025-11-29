#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    const int n = 10;
    int life = 5;
    bool death = true;

    char ships[n][n] = 
    {
        {'.', '.', 'S', 'S', 'S', 'S', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'S', '.', '.', '.', '.', '.', 'S', 'S', '.', '.'},
        {'S', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'S', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', 'S', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', 'S', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', 'S', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
    };
    while (life > 0)
    {
        death = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ships[i][j] == 'S')
                {
                    cout << ". ";
                }
                else
                {
                    cout << ships[i][j] << " ";
                }
            }
            cout << "\n";
        }

        string userInput;
        cin >> userInput;
        int row = userInput[1] - '0' - 1;
        int col = userInput[0] - 'A';
        if (ships[row][col] == '.')
        {
            cout << "Мимо\n";
            ships[row][col] = '*';
        }
        else if(ships[row][col] == '*' || ships[row][col] == 'X')
        {
            cout << "Повтор\n";
        }
        else
        {
            for (int i  = 1; i <= 3; i++)
            {
                if (ships[row+i][col] == 'S')
                {
                    cout << "Ранил\n";
                    ships[row][col] = 'X';
                    death = false;
                    break;
                }
                else if (ships[row - i][col] == 'S')
                {
                    cout << "Ранил\n";
                    ships[row][col] = 'X';
                    death = false;
                    break;
                }
                else if (ships[row][col + i] == 'S')
                {
                    cout << "Ранил\n";
                    ships[row][col] = 'X';
                    death = false;
                    break;
                }
                else if (ships[row][col - i] == 'S')
                {
                    cout << "Ранил\n";
                    ships[row][col] = 'X';
                    death = false;
                    break;
                }
            }
            if (death)
            {
                life--;
                cout << "Убил\n";
                ships[row][col] = 'X';
                death = true;
            }
        }


    }
    return 0;
}
