#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

#define pb push_back

using namespace std;

typedef vector<int> vi;

int n;

unordered_set<string> teams;
unordered_set<string> sol;

int main() {
    ios::sync_with_stdio(false);

    cin >> n;

    string team;

    for (int i = 0; i < n; i++) {
        cin >> team;
        if (teams.find(team) == teams.end()) {
            teams.insert(team);
        } else {
            sol.insert(team);
        }
    }

    for (auto & team : sol) {
        cout << team << endl;
    }


    return 0;
}

