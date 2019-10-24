#include <iostream>
#include <string>

using namespace std;

unsigned int n;

int main() {
    cin >> n;

    string guests[n];

    for (int i = 0; i < n; i++) {
        cin >> guests[i];
    }

    int num_guests = 2;

    for (int i = 0; i < n; i++) {
        int len = guests[i].length();
        if (len >= 5 and guests[i].substr(len - 4, len) == "+one") {
            num_guests += 2;
        } else {
            num_guests += 1;
        }
    }

    if (num_guests == 13) {
        cout << "1400\n";
    } else {
        cout << (num_guests * 100) << std::endl;
    }

    return 0;
}
