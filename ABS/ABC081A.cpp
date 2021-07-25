#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    // cout << s << endl;
    int s1 = s/100;
    // cout << s1 << endl;
    int s2 = (s-s1*100)/10;
    // cout << s2 << endl;
    int s3 = (s-s1*100-s2*10)/1;
    // cout << s3 << endl;

    int ans = 0;
    if( s1 == 1 ) ans++;
    if( s2 == 1 ) ans++;
    if( s3 == 1 ) ans++;

    cout << ans << endl;

}