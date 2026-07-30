#include <iostream>
#include <set>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const string target = "hello";
    int index = 0;
    string st;
    cin>>st;

    for (int i=0;i<st.length();i++) {
        if (st[i] == target[index]) index++;
        if (index == 5) break;
    }

    index == 5 ? cout<<"YES" : cout<<"NO";



    return 0;
}