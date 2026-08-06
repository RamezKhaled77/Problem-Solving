#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    vector<int> target_exit(n);
    for (int i = 0; i < n; i++) {
        cin >> target_exit[i];
    }

    stack<int> garage;
    int next_car = 1;

    for (int i = 0; i < n; i++) {
        int required_car = target_exit[i];

        while (next_car <= n && (garage.empty() || garage.top() != required_car)) {
            garage.push(next_car);
            next_car++;
        }

        if (!garage.empty() && garage.top() == required_car) {
            garage.pop();
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}