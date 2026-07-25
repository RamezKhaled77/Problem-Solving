#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define endl "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    deque<ll> dq;
    int q;
    cin >> q;

    for (int i=0;i<q;i++) {
        string type;
        cin >> type;
        if (type == "push_back") {
            ll x;
            cin >>x;
            dq.push_back(x);
        }else if (type == "push_front") {
            ll x;
            cin >>x;
            dq.push_front(x);
        }else if (type == "pop_back") {
            dq.pop_back();
        }else if (type == "pop_front") {
            dq.pop_front();
        } else if (type == "front") {
            cout << dq.front() << endl;
        } else if (type == "back") {
            cout << dq.back() << endl;
        } else if (type == "print") {
            int x;
            cin >> x;
            if (x >= 1 && x <= dq.size()) {cout << dq.at(x - 1) << endl;}
        }
    }







    return 0;
}