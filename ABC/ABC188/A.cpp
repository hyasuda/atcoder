#include <bits/stdc++.h>
using namespace std;

int main(){

    int X, Y;
    cin >> X >> Y;

    if( X < Y ){
        if(X + 3 > Y ){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    if( X > Y ){
        if(X < Y + 3 ){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;

}