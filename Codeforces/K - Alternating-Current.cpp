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


    string str;
    cin>>str;

    stack<char> st;

    for (int i =0;i<str.length();i++) {
        if (st.empty() || st.top() != str[i]) {
            st.push(str[i]);
        } else {
            st.pop();
        }
    }

    if (st.empty()) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }











    return 0;
}