#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

#define pb push_back

using namespace std;

typedef vector<int> vi;

int n;

vector <vector<string>> mp (128);

int main() {
    ios::sync_with_stdio(false);

    cin >> n;

    string hei;

    for (int i = 0; i < n; i++) {
        cin >> hei;
        mp[hei[0]].pb(hei);
    }

    char letter;

    cin >> letter;

    for (auto & x : mp[letter]) {
        cout << x << endl;
    }


    return 0;
}

