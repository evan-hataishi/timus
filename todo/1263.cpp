#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>

#define pb push_back

using namespace std;

int candidates;
int electors;
vector<int> votes(10001);

int main() {

    cin >> candidates >> electors;

    int vote;

    for (int i = 0; i < electors; i++) {
        cin >> vote;
        votes[vote]++;
    }

    for (int i = 1; i < candidates + 1; i++) {
        float percentage = ((float) votes[i] / electors) * 100.00;
        printf("%.2f%%\n", percentage);
    }

    return 0;
}