#include <iostream>
#include <vector>
#include <cmath>
#include <string>

#define pb push_back

using namespace std;

int n;
vector<pair<int, int>> counts;
int last;

int main() {

    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    counts.pb(make_pair(nums[0], 1));

    for (int i = 1; i < n; i++) {
        pair<int, int> last = counts.back();
        int curr = nums[i];
        if (curr == last.first) {
            counts.back().second += 1;
        } else {
            counts.pb(make_pair(curr, 1));
        }
    }

    cout << counts[0].second << " " << counts[0].first;

    for (int i = 1; i < counts.size(); i++) {
        cout << " " << counts[i].second << " " << counts[i].first;
    }

    cout << endl;

    return 0;
}