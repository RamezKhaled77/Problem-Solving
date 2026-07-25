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


    int q;
    queue<ll> qu;
    cin >> q;

    for (int i=0;i<q;i++) {
        string type;
        cin >> type;
        if (type == "push") {
            ll x;
            cin >>x;
            qu.push(x);
        } else if (type == "pop") {
            qu.pop();
        } else if (type == "front") {
            cout << qu.front() << endl;
        } else if (type == "back") {
            cout << qu.back() << endl;
        }
    }







    return 0;
}