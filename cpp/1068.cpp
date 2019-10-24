#include <iostream>
#include <vector>
#include <cmath>

#define pb push_back

using namespace std;

typedef vector<int> vi;
typedef vector<unsigned int> vui;

int n;

int main() {
    cin >> n;

    int curr = 1;

    int sum = 0;

    while (curr != n) {
//        cout << curr << endl;
        sum += curr;
        curr = curr > n ? curr-1 : curr+1;
    }

    sum += curr;

    cout << sum << endl;

    return 0;
}