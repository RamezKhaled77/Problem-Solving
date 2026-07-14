#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

bool isPalindrome = true;
    for (int i=0;i<n/2;i++) {
        if (arr[i] != arr[n-i-1]) {
            isPalindrome = false;
        }
    }

    cout << (isPalindrome ? "YES" : "NO") << "\n";
}