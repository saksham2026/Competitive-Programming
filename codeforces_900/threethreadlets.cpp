#include<bits/stdc++.h>
using namespace std;

string solve(long long a, long long b, long long c) {
    long long int sum = a + b + c;
    if(sum - 3 < 4) {
        return "YES";
    } 
    int largest;
    int smallest;
    if(a < b) {
        smallest = a;
        largest = b;
    }
    else{
        smallest = b;
        largest = a;
    }
    if( smallest > c) {
        smallest = c;
    }
    if(largest < c) {
        largest = c;
    }

    a = smallest;
    c = largest;
    b = sum - a - c;

    if(b%a == 0 && c%a == 0) {
        if((b/a - 1) + (c/a - 1) < 4) {
            return "YES";
        }
    }
    return "NO";

}

int main() {
    int T;
    cin >> T;

    for( int i = 0; i < T; i++ ) {
        long long a, b, c;
        cin >> a >> b >> c;

        cout << solve(a,b,c) << endl;
    }
    return 0;
}