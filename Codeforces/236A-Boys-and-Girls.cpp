#include <iostream>
#include <set>


using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    set<char> st;
    for (int i=0;i<s.length();i++) {
        st.insert(s[i]);
    }
    if (st.size()%2==0) {
        cout<<"CHAT WITH HER!"<<endl;
    } else {
        cout<<"IGNORE HIM!"<<endl;
    }



    return 0;
}