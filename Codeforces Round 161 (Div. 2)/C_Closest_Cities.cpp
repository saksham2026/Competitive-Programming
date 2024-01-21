#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int arr1[n];
    int arr2[n];

    for( int i = 0; i < n-1; i++) {
        if(i == 0) {
            arr1[i] = 0;
            arr1[i+1] = 1;
            continue;
        }
        if(abs(arr[i+1] - arr[i]) < abs(arr[i] - arr[i-1])) {
            arr1[i+1] = arr1[i] +1;
        }
        else{
            arr1[i+1] = arr1[i] + abs(arr[i] - arr[i+1]);
        }
    }
    for( int i = n-1; i > 0; i--) {
        if(i == n-1) {
            arr2[i] = 0;
            arr2[i-1] = 1;
            continue;
        }
        if(abs(arr[i] - arr[i-1]) < abs(arr[i] - arr[i+1])) {
            arr2[i-1] = arr2[i] + 1;
        }
        else{
            arr2[i-1] = arr2[i] + abs(arr[i] - arr[i-1]);
        }
    }
    int m;
    cin >>m;
    for( int i = 0; i < m; i++) {
        ll x, y;
        ll ans ;
        cin >> x >> y;
        if( x > y) {
            ans = abs(arr2[y-1] - arr2[x-1]);
        } else{
            ans = abs(arr1[x-1] - arr1[y-1]);
        }
        cout << ans << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}