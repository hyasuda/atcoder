#include <bits/stdc++.h>
using namespace std;

vector<long long> vector_devided(vector<long long> a) {
    for( long long i = 0 ; i < a.size() ; i++ ){
        a[i] = a[i]/2;
    }
    return a;
}

bool vector_even(vector<long long> a) {
    for( long long i = 0 ; i < a.size() ; i++ ){
        if( a[i]%2 != 0 || a[i] == 0 ) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<long long>a(n, 0);
    for( int i = 0 ; i < n ; i++ ) {
        cin >> a[i];
    }
    int ans = 0;
    int iline = 0;
    while( vector_even( a ) ){
        a = vector_devided( a );
        ans++;
        iline++;
        if( iline == 10) break;
    }

    cout << ans << endl;

}

