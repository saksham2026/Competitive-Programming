#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int T;
    cin >> T;

    for( int i = 0; i < T; i++) {
        int N;
        cin >> N;
        long long int totalVolume = 0;

        for( int i = 0; i<N ; i++) {
            long int a ;
            cin >> a;
            totalVolume += a; 
        }

        double side = sqrt(totalVolume);  // was using float instead of double.
         long int b = side;
         if( b == side) {
            cout << "YES" << endl;
         }
         else{
            cout << "NO" << endl ;
         }
    }
    return 0;
}