#include <iostream>
#include <vector>

using namespace std;

void getCombinations(int n, int sum = 0, vector<int> comb = {}, int s = 1)
{
    if (sum == n)
    {
        if (!comb.empty())
        {
            cout << comb[0];
            for (int i = 1; i < comb.size(); i++)
            {
                cout << " + " << comb[i];
            }
            cout << endl;
        }
        return;
    }

    for (int i = s; i <= 5 && sum + i <= n; i++)
    {
        comb.push_back(i);
        getCombinations(n, sum + i, comb, s);
        comb.pop_back();
    }
}

int ways(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    return ways(n - 1) + ways(n - 3) + ways(n - 4);
}

int main(int argc, char* argv[])
{
    for (int i = 0; i < 10; ++i)
    {
        cout << i << " " << ways(i) << endl;
    }

    return 0;
}
