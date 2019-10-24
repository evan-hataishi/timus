
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;
string tmp;
vector<vector<int>> coord = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};


bool is_valid(int x, int y) {
    return x >= 'a' and x <= 'h' and y >= '1' and y <= '8';
}

int main() {
    cin >> n;

    vector<pair<int, int>> data (n);

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        data[i].first = tmp[0];
        data[i].second = tmp[1];
    }

    for (int i = 0; i < n; i++) {
        int valid = 0;
        for (auto pair : coord) {
            // cout << "(" << data[i].first+pair[0] << ", " << data[i].second+pair[1] << ")\n";
            if (is_valid(data[i].first+pair[0], data[i].second+pair[1])) {
                valid ++;
            }
        }
        cout << valid << std::endl;
    }

    return 0;
}