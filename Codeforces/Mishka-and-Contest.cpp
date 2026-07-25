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

    deque<int> dq;
    int n, k, ans = 0;
    cin >> n >> k;

    int x;
    for (int i=0;i<n;i++) {
        cin >> x;
        dq.push_back(x);
    }
    while (!dq.empty()) {
        if (dq.front() <= k) {
            dq.pop_front();
            ans++;
        } else if (dq.back() <= k) {
            dq.pop_back();
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;




    // }





    return 0;
}