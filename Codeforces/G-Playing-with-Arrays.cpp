#include <iostream>
#include <deque>


using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        deque<int> A;
        for (int i=n;i>=1;i--) {
            if (!A.empty()) {
                A.push_front(A.back());
                A.pop_back();
            }
            A.push_front(i);

        }
        for (int i = 0; i < n; i++) {
            cout << A[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;



    }

    return 0;
}