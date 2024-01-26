#include<bits/stdc++.h>
using namespace std;


#define ll long long

void solve()  {
    ll n;
    cin >> n;

    ll arr[n];
    vector<ll>b;
    vector<ll>c;
     ll countB = 0;
     ll countC = 0;
    ll flag =  0;
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
     for( ll i  = 0; i < n; i++) {
        if(i == n-1 && flag == 0) {
            cout << -1 ;
            return;
        }
        if(flag == 1) {
            c.push_back(arr[i]);
            countC++;
            continue;
        } 
        if(arr[i] == arr[i+1]) {
            b.push_back(arr[i]);
            countB++;
        } else{
            flag = 1;
            b.push_back(arr[i]);
            countB++;
        }
     }

     if( countC == 0 || countB == 0) {
        cout << -1 ;
        return;
     }
     cout << countB << " " << countC ;
     cout << endl;
     for( int i = 0; i < countB; i++) {
        cout << b[i] << " ";
     }
     cout << endl;
     for( int i  = 0; i < countC; i++ ) {
        cout << c[i] << " ";
     }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve() ;
        cout << endl;
    }
    return 0;
}