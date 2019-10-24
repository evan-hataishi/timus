#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

#define pb push_back

using namespace std;

typedef vector<int> vi;

int n, m, y;

vi sol;

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> m >> y;

    for (int i = 0; i < m; i++) {
        if (pow((double) (i % m), (double) n) == y) {
            sol.pb(i);
        }
    }

    if (sol.size() != 0) {
        cout << sol[0];
    } else {
        cout << "-1";
    }

    for (int i = 1; i < sol.size(); i++) {
        cout << " " << sol[i];
    }

    cout << endl;

    return 0;
}

