#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

typedef vector<int> vi;

vector<vi> ev (3);

int next(int curr, int target, vi l) {
    while (l[curr] < target and curr < l.size()) {
        curr++;
    }
    return curr;
}

int main() {
    int n;
    int item;
    for (int i = 0; i < 3; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> item;
            ev[i].pb(item);

        }
    }

    int count = 0;
    int x = 0;
    int y = 0;

    for (const auto &num : ev[0]) {
        x = next(x, num, ev[1]);
        y = next(y, num, ev[2]);
        if (num == ev[1][x] and num == ev[2][y]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}