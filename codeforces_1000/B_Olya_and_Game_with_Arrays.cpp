#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll A[n];
    ll m = INT_MAX;
    ll beauty = 0;
    for( int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        ll arr[a];
        for( int j = 0; j < a; j++) {
            cin >> arr[j];
        }
        sort(arr, arr+a);
        m = min(m,arr[1]);
        A[i] = arr[0];
        beauty += arr[1];
    }
    sort(A, A+n);
    for( int i = 0; i < n; i++) {
        if(A[i] < m) {
            beauty += (A[i] - m);
            m =  A[i]; 
        }
    }
    cout << beauty ;
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