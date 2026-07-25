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

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int open_count = 0, ans = 0;

        for (int i=0;i<s.length();i++) {
            if (s[i] == '(') {
                open_count++;
            } else {
                if (open_count == 0) {
                    ans++;
                } else {
                    open_count--;
                }
            }
        }

        cout << ans << endl;




    }





    return 0;
}