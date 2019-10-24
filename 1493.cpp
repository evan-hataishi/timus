#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <cstdlib>

#define pb push_back

using namespace std;

typedef vector<int> vi;

int n;

int main() {
    ios::sync_with_stdio(false);

    cin >> n;
    int n2 = n + 1;
    n -= 1;

    int summ = 0;
    int sump = 0;

    for (int _ = 0; _ < 3; _++) {
        summ += n % 10;
        n /= 10;
        sump += n2 % 10;
        n2 /= 10;
    }

    for (int _ = 0; _ < 3; _++) {
        summ -= n % 10;
        n /= 10;
        sump -= n2 % 10;
        n2 /= 10;
    }

    if (abs(summ) == 0 or abs(sump) == 0) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}

// 012200
// 012199