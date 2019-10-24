#include <iostream>
#include <vector>
#include <cmath>

#define pb push_back

using namespace std;

typedef vector<int> vi;
typedef vector<unsigned int> vui;

unsigned int flags(int prev, int curr, int spots);

int n;

vector<vector<vui>> memo (46, vector<vui>(4, vui(4, -1)));

int main() {
    cin >> n;

//    cout << memo[45][3][3] << endl;
    cout << flags(0, 0, n) << endl;

    return 0;
}

unsigned int flags(int prev, int curr, int spots) {
    if (memo[spots][prev][curr] != -1) {
        return memo[spots][prev][curr];
    }

    if (spots <= 0) {
        if (curr == 3) {
            memo[spots][prev][curr] = 0;
        } else {
            memo[spots][prev][curr] = 1;
        }
    } else {
        if (curr == 0) {
            memo[spots][prev][curr] = flags(curr, 2, spots - 1) + flags(curr, 1, spots - 1);
        } else if (curr == 1) {
            memo[spots][prev][curr] = flags(curr, 2, spots - 1) + flags(curr, 3, spots - 1);
        } else if (curr == 2) {
            memo[spots][prev][curr] = flags(curr, 1, spots - 1) + flags(curr, 3, spots - 1);
        } else if (prev == 2 and curr == 3) {
            memo[spots][prev][curr] = flags(curr, 1, spots - 1);
        } else if (prev == 1 and curr == 3) {
            memo[spots][prev][curr] = flags(curr, 2, spots - 1);
        } else {
            memo[spots][prev][curr] = 0;
        }
    }
    return memo[spots][prev][curr];
}