#include <iostream>
#include <vector>

using namespace std;

#define endl "\n"

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<string> patterns = {"RGB", "RBG", "BRG", "BGR", "GRB", "GBR"};
    int min_changes = 1e9;
    string best_pattern;

    for (string p: patterns) {
        int curr_change =0;
        string curr_pattern="";

        for (int i=0;i<n;i++) {
            char expected_char = p[i % 3];
            curr_pattern += expected_char;

            if (s[i] != expected_char) {
                curr_change++;
            }
        }

        if (curr_change < min_changes) {
            min_changes = curr_change;
            best_pattern = curr_pattern;
        }
    }

    cout<<min_changes<<endl;
    cout<<best_pattern<<endl;













    return 0;
}