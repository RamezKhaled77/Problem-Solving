#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[5][5], oneRow = 0, oneCol = 0;

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                 oneRow = i + 1;
                oneCol = j + 1;
            }
        }
    }
    cout << abs(oneRow - 3) + abs(oneCol - 3) << endl;

}