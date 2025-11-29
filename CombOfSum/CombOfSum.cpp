#include <iostream>
#include <vector>

using namespace std;

int total = 0;

void findCombinations(int n, vector<int>& current, int start) {
    if (n == 0) {
        for (int i = 0; i < current.size(); i++) {
            if (i > 0) cout << " ";
            cout << current[i];
        }
        cout << endl;
        total++;
        return;
    }

    if (n < 0) {
        return;
    }

    for (int i = start; i <= 5; i++) {
        current.push_back(i);
        findCombinations(n - i, current, i);
        current.pop_back();
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> current;
    findCombinations(n, current, 1);

    cout << total << endl;

    return 0;
}