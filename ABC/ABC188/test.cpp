#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0 ; i < (n) ; ++i)
using ll = long long;
using P = pair<int, int>;


int main(){

    vector<P> v;
    v.emplace_back( 1, 10);
    v.emplace_back( 2, 20);
    v.emplace_back( 3, 30);

    cout << "First : " << endl;
    for( auto a : v ){
        cout << a.first << "\t" << a.second << endl;
    }
    cout << endl;

    v.emplace_back( 1, 5  );
    v.emplace_back( 2, -1 );
    v.emplace_back( 3, 0  );

    cout << "Second : " << endl;
    for( auto a : v ){
        cout << a.first << "\t" << a.second << endl;
    }
    cout << endl;
    
    return 0;
}