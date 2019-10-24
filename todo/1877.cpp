#include <iostream>

using namespace std;

unsigned int x, y;

int main() {
    cin >> x >> y;

    if ((x % 2 == 0) or (y % 2 == 1)) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    return 0;
}
