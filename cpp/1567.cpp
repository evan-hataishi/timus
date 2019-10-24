#include <iostream>
#include <vector>
#include <cmath>
#include <string>

#define pb push_back

using namespace std;

string input;
int cost = 0;

int main() {

    std::getline(std::cin, input);

    for (auto c : input) {
        if (c > 96 and c < 123) {
            cost += (c % 97) % 3 + 1;
//            cout << ((c % 97) % 3 + 1) << endl;
        } else if (c == '.' or c == ' ') {
            cost += 1;
        } else if (c == ',') {
            cost += 2;
        } else if (c == '!') {
            cost += 3;
        }
    }

    cout << cost << endl;

    return 0;
}