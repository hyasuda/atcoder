#include <bits/stdc++.h>
using namespace std;
// #define rep(i, n) for (int i = 0; i < n; ++i)

int main() {
    int n;
    cin >> n;
    vector<int> A(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int ans = 0;

    while (true) {
        bool exist_odd = false;
        for (int i = 0; i < n; ++i) {
            if (A[i] % 2 != 0) exist_odd = true;
        }

        if (exist_odd) break;

        for (int i = 0; i < n; ++i) {
            A[i] /= 2;
        }
        ++ans;
    }

    cout << ans << endl;
}