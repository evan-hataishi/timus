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

    int emp = 0;
    int mac = 0;
    int lit = 0;

    string _;
    string type;

    for (int i = 0; i < n; i++) {
        cin >> type >> _;
        if (type == "Emperor") {
            emp++;
        } else if (type == "Macaroni") {
            mac++;
        } else {
            lit++;
        }
    }

    if (emp > mac and emp > lit) {
        cout << "Emperor Penguin\n";
    } else if (mac > emp and mac > lit) {
        cout << "Macaroni Penguin\n";
    } else {
        cout << "Little Penguin\n";
    }

    return 0;
}