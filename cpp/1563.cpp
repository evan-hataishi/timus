#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_set>

#define pb push_back

using namespace std;

int n;

unordered_set<string> stores;

int main() {

    cin >> n;

    string input;

    getchar();

    for (int i = 0; i < n; i++) {
        std::getline(std::cin, input);
        stores.insert(input);
    }

    cout << (n - stores.size()) << endl;


    return 0;
}