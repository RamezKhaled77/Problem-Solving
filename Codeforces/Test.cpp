#include <iostream>
#include <vector>
#include <stack>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int t;
    cin>>t;
    while(t--) {
        int x, n;
        cin>>x;
        n=x;
        for (int i=1;i<x;i++) {
            n=n*(x-i);
        }
        cout<<n<<endl;
    }


    return 0;
}