#include <iostream>

using namespace std;

unsigned int n;

int main() {
    cin >> n;

    int sum = 1;

    for (int i = 2; i <= n; i++) {
        sum += i;
    }

    if (sum % 2 == 0) {
        cout << "black\n";
    } else {
        cout << "grimy\n";
    }

    return 0;
}

// odd + odd = even
// odd - odd = even
//
// even + even = even
// even - even = even
//
// even + odd = odd
// even - odd = odd
