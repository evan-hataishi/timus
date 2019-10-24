#include <iostream>
#include <vector>
#include <unordered_set>

#define pb push_back

using namespace std;

typedef vector<int> vi;

unordered_set<unsigned int> t_dates;

unsigned int n, k;

int main() {
    // TODO - was too slow without this...
    ios::sync_with_stdio(false);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        t_dates.insert(k);
    }

    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> k;
        if (t_dates.find(k) != t_dates.end()) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}