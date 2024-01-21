#include<bits/stdc++.h>
using namespace std;

bool isOnlyNumberPossible(int a, int b, int c) {
    if( (abs(b-c))%2 != 0 ){
        return false;
    }

    else{
        if( a >= abs((b-c)/2) ) {
            return true;
        }

        else{
            int y = min(b, c);
            int x = max(b, c);

            if( x <= 3*y + 2*a ){
                return true;
            }
        }
        int y = min(b,c) + a;
        int x = max(b,c) ;
        x = x - y;
        if( y >= x/2 ){
            return true;
        }
        while(x > 0) {
            x = x -2*y;
            if( y >= x/2 ){
            return true;
            }
        }
    }
    return false;
}

int main() {

    int T;
    cin >> T;

    for( int i = 0; i < T; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << isOnlyNumberPossible(a, b, c) << " ";
        cout << isOnlyNumberPossible(b, a, c) << " ";
        cout << isOnlyNumberPossible(c, b, a) << endl ;

    }
    return 0;
}
