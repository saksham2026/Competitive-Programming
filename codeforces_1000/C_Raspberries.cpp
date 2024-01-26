#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    int ans = INT_MAX;
    int countEven = 0;
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i]%2 == 0){
            countEven++;
        }
        if(arr[i]%k == 0) {
            ans = 0;
        }
        ans = min(ans, k - arr[i]%k);
    }
    if(k == 4){
        if(countEven < 3) {
            cout << min(ans, 2 - countEven);
        } else{
            cout << 0;
        }
    } else {
        cout << ans;
    }
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