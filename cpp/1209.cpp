#include <iostream>
#include <vector>
#include <cmath>

#define pb push_back

using namespace std;

typedef vector<int> vi;
typedef vector<unsigned int> vui;


int n;

int solve(unsigned int a) {
    // watch out for integer overflow! 2^31 - 1
    double x = (-1 + sqrt(1 + 8 * (double) a)) / 2;
//    cout << "num: " << x << endl;
    if (x == (unsigned int) x) {
        return 1;
    }
    return 0;
}

int main() {
    cin >> n;

    vi nums (n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    printf("%d", solve(nums[0]-1));

    for (int i = 1; i < n; i++) {
        printf(" %d", solve(nums[i]-1));
    }

    printf("\n");

    return 0;
}