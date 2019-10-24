#include <iostream>

using namespace std;

unsigned int n;

int main() {
    cin >> n;
    if (n >= 1 and n <= 4) {
        cout << "few\n";
    } else if (n >= 5 and n <= 9) {
        cout << "several\n";
    } else if (n >= 10 and n <= 19) {
        cout << "pack\n";
    } else if (n >= 20 and n <= 49) {
        cout << "lots\n";
    } else if (n >= 50 and n <= 99) {
        cout << "horde\n";
    } else if (n >= 100 and n <= 249) {
        cout << "throng\n";
    } else if (n >= 250 and n <= 499) {
        cout << "swarm\n";
    } else if (n >= 500 and n <= 999) {
        cout << "zounds\n";
    } else {
        cout << "legion\n";
    }
}
