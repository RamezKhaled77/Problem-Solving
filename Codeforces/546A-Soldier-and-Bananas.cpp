#include <iostream>

using namespace std;

int main() {
    int k, w;
    long long n;

    cin >> k >> n >> w;

    long long t = (w * (w + 1) / 2) * k;
    if (t <= n) {
        cout << 0;
    } else {
        cout << abs(t - n) << endl;
    }


}