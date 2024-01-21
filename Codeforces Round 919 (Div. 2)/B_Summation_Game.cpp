#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    ll sum = 0;
    int arr[n];
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    ll var2 = 0;
    for(int i = n-1 ; i > n-x ; i--) var2 += arr[i];
    ll ans = sum - 2*var2;

    int j = n-1;
    int i = n-1-x;
    ll var1 = 0;
    while(j > n-1-k) {
        var1 += arr[j];
        var2 -= arr[j];
        if(i>=0) var2 += arr[i];
        ans = max( ans, sum - 2*var2 - var1);
    }
}

int main() {
    return 0;
}