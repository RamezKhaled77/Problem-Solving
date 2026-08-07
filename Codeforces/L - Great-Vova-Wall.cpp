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


    int n;
    cin>>n;

    stack<int> st;

    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        if (st.empty() || st.top() % 2 != x % 2) {
            st.push(x);
        } else {
            st.pop();
        }
    }


    if (st.empty() || st.size() == 1) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }







    return 0;
}