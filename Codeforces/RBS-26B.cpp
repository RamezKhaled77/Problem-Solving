#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

#define endl "\n"
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int open_count = 0;
    int pairs_count = 0;
    string str;
    cin >> str;

    for (int i=0;i<str.length();i++) {
        if (str[i] == '(') {
            open_count++;
        } else if (str[i] == ')' && open_count > 0) {
            open_count--;
            pairs_count+=2;
        }
    }

    cout << pairs_count << endl;






    return 0;
}