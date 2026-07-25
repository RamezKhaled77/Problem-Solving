//
// Created by ramez on 25‏/7‏/2026.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define endl "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<ll, string>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
        v[i].first *= -1;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i].second << " " << -v[i].first << endl;
    }

    return 0;
}