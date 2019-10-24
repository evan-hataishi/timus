#include <iostream>

using namespace std;

int n, k;

int main() {
    cin >> n >> k;
    int time = 0;
    int unfinished = (n * 2);
    while (unfinished > 0) {
        if (n < k) {
            unfinished -= n;
        } else {
            unfinished -= k;
        }
        time++;
    }
    cout << time << endl;

    return 0;
}