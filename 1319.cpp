#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>

#define pb push_back

using namespace std;

int n;

int main() {

    cin >> n;

    int backwards[n][n];

    int count = 1;

    for (int i = 0; i < n; i++) {
        int row = 0;
        int col = i;
        while (row < n and col > -1) {
//            cout << "(" << row << ", " << col << ")" << endl;
            backwards[row][col] = count;
            count++;
            row++;
            col--;
        }
    }

    for (int i = 1; i < n; i++) {
        int row = i;
        int col = n - 1;
        while (row < n and col > -1) {
//            cout << "(" << row << ", " << col << ")" << endl;
            backwards[row][col] = count;
            count++;
            row++;
            col--;
        }
    }


    int forwards[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = (n - 1); j > -1; j--) {
            forwards[i][n - j -1] = backwards[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        cout << forwards[i][0];
        for (int j = 1; j < n; j++) {
            cout << " " << forwards[i][j];
        }
        cout << endl;
    }

    return 0;
}