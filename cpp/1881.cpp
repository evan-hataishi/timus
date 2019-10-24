#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

#define pb push_back

using namespace std;

typedef vector<int> vi;

int h, w, n;

int main() {
    ios::sync_with_stdio(false);

    cin >> h >> w >> n;

    int lines = 1;
    int curr_line_l = 0;

    string word;
    int space_needed;

    for (int i = 0; i < n; i++) {
        cin >> word;
        // cout << "curr line: " << curr_line_l << " word: " << word << endl;
        if (curr_line_l == 0) {
            curr_line_l += word.length();
        } else if ((curr_line_l + word.length() + 1) > w) {
            lines++;
            curr_line_l = word.length();
        } else {
            curr_line_l += word.length() + 1;
        }
    }

    cout << (ceil((float) lines / h)) << endl;

    return 0;
}

