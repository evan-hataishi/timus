#include <iostream>

using namespace std;

unsigned int a1, a2, a3, b1, b2, b3;

int main() {
    cin >> a1 >> b1;
    cin >> a2 >> b2;
    cin >> a3 >> b3;

    cout << (a1 - a3) << " " << (b1 - b2) << std::endl;

    return 0;
}
