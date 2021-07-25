#include <bits/stdc++.h>
using namespace std;
const long long MAX_N = 10000;

const string chokudai = {"chokudai"};
string s;

int ans = 0;

void search_chokudai(int i, int j) {
    if( j == chokudai.size() ) {
        ans++;
        return;
    }
    if( s[i] == chokudai[j] ){
        cout << i << " " << s[i] << " " << chokudai[j] << endl;
        search_chokudai( i+1, j+1 );
    } else {
        cout << i << " : skip" << endl;
        p = make_pair(i, j);
        search_chokudai( i+1, j   );
    }
}

int main() {
    cin >> s;
    search_chokudai( 0, 0 );
    cout << p.first << " " << p.second << endl;
    cout << ans << endl;
}