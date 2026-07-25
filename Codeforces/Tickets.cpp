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

    queue<int> q;
    int n;
    cin >> n;

    int type, id;
    for (int i=0;i<n;i++) {
        cin >> type >> id;
        if (type == 1) {
            q.push(id);
        } else {
            if (id == q.front()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            q.pop();
        }
    }




    // }





    return 0;
}