#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int n, m;
    cin>>n>>m;
    vector<pair<long long, long long>> v;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin>>l>>r;
        v.push_back({l, r});
    }

    sort(v.begin(), v.end());


    vector<pair<long long, long long>> v2;
    v2.push_back(v[0]);

    for (int i = 1; i < n ; i++) {
        if (v[i].first <= v2.back().second) {
            v2.back().second = max(v2.back().second, v[i].second);
        } else {
            v2.push_back(v[i]);
        }
    }



    int q;
    cin>>q;

    while (q--) {
        long long u, v_island;
        cin>>u>>v_island;

        long long start_island = min(u, v_island);
        long long end_island = max(u, v_island);

        int low = 0, high = v2.size() - 1;
        int target_idx = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (v2[mid].first <= start_island) {
                target_idx = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (target_idx != -1 && v2[target_idx].second >= end_island) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }


    }












    return 0;
}