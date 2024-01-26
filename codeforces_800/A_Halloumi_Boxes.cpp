#include<bits/stdc++.h>
using namespace std;


#define ll long long
void solve() {
    ll n,k;
    cin >> n >> k;
    ll a[n];
    ll b[n];
    for( int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a+n);
    int flag  = 0;
    for( int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
           if(k == 1) {
            cout << "NO";
            return;
           }
        }
    }
    cout << "YES" ;
    return;
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