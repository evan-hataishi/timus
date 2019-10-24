#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;
    int m  = min<int> (a-b-c, a-b*c);
    cout << m << endl;
    return 0;
}