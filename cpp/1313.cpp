#include <iostream>

using namespace std;

unsigned int lines;

int main() {
    cin >> lines;

    unsigned int pix[lines][lines];
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines; j++) {
            cin >> pix[i][j];
        }
    }

    printf("%d", pix[0][0]);

    for (int i = 1; i < lines; i++) {
        int row = i;
        int col = 0;
        while (col < lines and row >= 0) {
                printf(" %d", pix[row][col]);
                row--;
                col++;
        }
    }

    for (int i = 1; i < lines; i++) {
        int row = lines - 1;
        int col = i;
        while (col < lines and row >= 0) {
            printf(" %d", pix[row][col]);
            row--;
            col++;
        }
    }

    cout << std::endl;

}
