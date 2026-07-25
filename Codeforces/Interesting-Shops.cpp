#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define endl "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    //
    // while(t--) {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    int x;
    for (int i=0;i<q;i++) {
        cin >> x;
        auto count = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << count << endl;
    }


    // }





    return 0;
}