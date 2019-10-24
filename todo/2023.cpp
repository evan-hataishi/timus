#include <iostream>
#include <string>
#include <unordered_set>
#include <cstdlib>

using namespace std;

unordered_set<string> one ({"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"});
unordered_set<string> two ({"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"});
unordered_set<string> three ({"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin"});

unordered_set<string> bins[3] = {three, two, one};

unsigned int n;

int main() {
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    int curr = 0;
    unsigned int delivered = 0;
    unsigned int steps = 0;
    while (delivered < n) {
        if (bins[0].find(names[delivered]) != bins[0].end()) {
            steps += curr - 0;
            curr = 0;
        } else if (bins[1].find(names[delivered]) != bins[1].end()) {
            steps += abs(curr - 1);
            curr = 1;
        } else {
            steps += 2 - curr;
            curr = 2;
        }
        delivered++;
    }

    cout << steps << std::endl;

    return 0;
}
