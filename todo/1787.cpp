#include <iostream>

using namespace std;

unsigned int k, n;

int main() {
    cin >> k >> n;

    int num_cars[n];

    for (int i = 0; i < n; i++) {
        cin >> num_cars[i];
    }

    int overflow = 0;

    for (int i = 0; i < n; i++) {
        overflow = max<int>(0, num_cars[i] + overflow - k);
    }

    cout << overflow << std::endl;

    return 0;
}
