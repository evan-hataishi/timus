#include <iostream>

using namespace std;

unsigned int n;

// This fails on test #2...
int main() {
    cin >> n;
    int wall[n];

    for (int i = 0; i < n; i++) {
        cin >> wall[i];
    }

    int mid = 2;
    int max = wall[0] + wall[1] + wall[2];
    for (int i = 1; i < n - 2; i++) {
        int sum = wall[i] + wall[i + 1] + wall[i + 2];
        if (max < sum) {
            max = sum;
            mid = i + 2;
        }
    }

    cout << max << " " << mid << std::endl;

    return 0;
}
