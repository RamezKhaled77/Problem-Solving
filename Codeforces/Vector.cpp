//
// Created by ramez on 24‏/7‏/2026.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    for (int i = 0;i<n;i++) {
        cin >> a[i];
    }

    string type;
    for (int i=0;i<q;i++) {
        cin >> type;

        if (type == "pop_back") {
            a.pop_back();
        } else if (type == "front") {
            cout << a.front() << endl;
        } else if (type == "back") {
            cout << a.back() << endl;
        } else if (type == "print") {
            int pos;
            cin >> pos;
            cout << a[pos - 1] << endl;
        } else if (type == "push_back") {
            int x;
            cin >> x;
            a.push_back(x);
        } else if (type == "sort") {
            int l, r;
            cin >> l >> r;
            sort(a.begin() + (l - 1), a.begin() + r );
        }
        else if (type == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(a.begin() + (l - 1), a.begin() + r );
        }
    }

}