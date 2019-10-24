#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_set>

#define pb push_back

using namespace std;

int low, high;

// TODO - without loop

int main() {

    cin >> low;
    cin >> high;

    int count = 0;

    for (int i = low; i <= high; i++) {
        if (i % 2 != 0 ) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}