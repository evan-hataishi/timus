#include <iostream>
#include <vector>

using namespace std;

unsigned int n;
vector<vector<int>> solved(101);

int main() {
    cin >> n;

    int id, score;
    for (int i = 0; i < n; i++) {
        cin >> id >> score;
        solved[score].push_back(id);
    }

    for (int i = 100; i >= 0; i--) {
        for (int id : solved[i]) {
            cout << id << " " << i << std::endl;
        }
    }

    return 0;
}
