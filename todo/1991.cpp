#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>

#define pb push_back

using namespace std;

int n, k;

int main() {

    cin >> n >> k;

    int booms = 0;

    int extra = 0;
    int alive = 0;

    for (int i = 0; i < n; i++) {
        cin >> booms;
        extra += max<int>(0, k - booms);
        alive += max<int>(0, booms - k);
    }

    cout << alive << " " << extra << endl;

    return 0;
}