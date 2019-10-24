#include <iostream>

using namespace std;

unsigned int f;

int main() {
    cin >> f;
    if ((12 - f) * 45 <= 240) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
