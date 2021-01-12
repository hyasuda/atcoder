#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0 ; i < (n) ; ++i)
using ll = long long;
using P = pair<int, int>;


int main(){

    int n;
    cin >> n;
    int n2 = 1 << n;
    vector<int> a(n2);
    rep(i, n2) cin >> a[i];
    map<int, int> mp;
    rep(i, n2) mp[a[i]] = i+1;
    while( a.size() > 2 ){

    }

    int ans = min(a[0], a[1]);
    // cout << ans << endl;
    cout << mp[ans] << endl;

}