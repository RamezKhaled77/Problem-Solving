#include <iostream>

using namespace std;
int main () {
    int wl, wb, y = 0;
    cin >> wl >> wb;

    while (wl <= wb) {
        wl = wl * 3;
        wb = wb * 2;
        y++;
    }
    cout << y << "\n";

}