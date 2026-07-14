#include <iostream>

using namespace std;

int main() {
    int n;
    bool swapped;
    cin >> n;
    int arr[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    for (int i=0;i<n-1;i++) {
        swapped = false;
        for (int j=0;j<n-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }

    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

}