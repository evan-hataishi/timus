#include <iostream>
#include <vector>
#include <unordered_set>

#define pb push_back

using namespace std;

typedef vector<int> vi;

unordered_set<unsigned int> t_dates;

string s;

int main() {
    ios::sync_with_stdio(false);

    cin >> s;

    int row = stoi(s.substr(0, s.length() - 1));
    char col = s[(s.length() - 1)];

    // cout << "Row: " << row << " Col: " << col << endl;

    if (row < 3) {
        if (col == 'A' or col == 'D') {
            cout << "window\n";
        } else {
            cout << "aisle\n";
        }
    } else if (row < 21) {
        if (col == 'A' or col == 'F') {
            cout << "window\n";
        } else {
            cout << "aisle\n";
        }
    } else {
        if (col == 'A' or col == 'K') {
            cout << "window\n";
        } else if (col == 'C' or col == 'D' or col == 'G' or col == 'H') {
            cout << "aisle\n";
        } else {
            cout << "neither\n";
        }
    }
    return 0;
}