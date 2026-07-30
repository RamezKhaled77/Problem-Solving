#include <iostream>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;

    while (t>0){
        for (int i=0;i<n-1;i++) {
            if (s[i] == 'B' && s[i+1]=='G') {
                swap(s[i], s[i+1]);
                i++;
            }
        }
        t--;
    }
    cout<<s;



    return 0;
}