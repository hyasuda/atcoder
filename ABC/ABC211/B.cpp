#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> s(4);
    cin >> s[0] >> s[1] >> s[2] >> s[3];

    vector<string> s_c{"H", "2B", "3B", "HR"};

    sort(s.begin(), s.end());
    sort(s_c.begin(), s_c.end());

    for( int i = 0 ; i < s.size() ; i++ ) {
        if( s[i] != s_c[i] ) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;

}