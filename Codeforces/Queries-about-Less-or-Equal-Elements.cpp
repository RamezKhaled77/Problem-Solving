#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;


    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        auto count = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << count << ' ';
    }
    cout << "\n";

    return 0;
}