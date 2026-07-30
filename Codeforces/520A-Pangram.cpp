#include <iostream>
#include <set>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    if (n >= 26) {
        set<char> st;
        for (int i=0;i<n;i++) {
            char c;
            cin>>c;
            st.insert(tolower(c));
        }
        st.size() == 26 ? cout<<"YES" : cout<<"NO";
    } else {
        cout<<"NO";
    }

    return 0;
}