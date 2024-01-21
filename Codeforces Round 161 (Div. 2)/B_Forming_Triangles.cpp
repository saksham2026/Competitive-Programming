#include<bits/stdc++.h>
using namespace std;

#define ll long long 
void solve() {
    ll n;
    cin >> n;
    ll arr[n];

    for( ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    ll arr2[n] = {1};
    ll count = 1;
    ll pointer = 0;
    ll sum = 0;
    ll diffrence;
    ll combinations = 0;
    for( ll i = 0; i < n; i++){
        if(i!= n-1) {
            diffrence = arr[i+1] - arr[i];
            if(!diffrence) {
                count++;
            } else {
                arr2[pointer] = count;
                combinations += count*(count-1)/2;
                sum+=count;
                pointer++;
                count = 1;
            }
        }
        else{
            if(diffrence!=0) {
                arr2[pointer] = 1;
                pointer++;
                sum+=1;
            }
        }
        if( i == n-1 && sum < n) {
            arr2[pointer] = count;
            combinations += count*(count-1)/2;
            pointer++;
        }
    }
    // cout << combinations << endl;
    ll i = 0;
    ll j = 0;
    ll ans = 0;
    while(j<n){
        combinations -= arr2[i]*(arr2[i] - 1)/2;
            ans += arr2[i]*combinations + arr2[i]*(arr2[i] - 1)*(arr2[i] - 2)/6;
        j += arr2[i];
        i+=1;
    }
    cout << ans << endl;
    
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}