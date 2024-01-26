#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
    ll n, x;
    cin >> n >> x;
    ll a[n+2];
    ll m = INT_MIN;
    for( int i = 0; i < n+2; i++) {
        if(i == 0 ) {
            a[i] = 0;
        } else if( i == n+1) {
            a[i] = x;
        } else{
            cin >> a[i];
        }
    }
    for( int i = 0; i < n+1; i++) {
        if( i == n) {
            m = max(m, 2*(a[i+1] - a[i]));
        }
        m = max(m, a[i+1] - a[i]);
    }
    cout << m ;
}


int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
        cout << endl;
    }
    return 0;
}