#include <iostream>

using namespace std;

int m, n;

int main() {
    cin >> m >> n;

    if ((m * n) % 2 == 0) {
        cout << "[:=[first]\n";
    } else {
        cout << "[second]=:]\n";
    }

    return 0;
}
