#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    ll count = 0;
    int flag = 1;
    for( int i = 0; i < n; i++) {
        if(i == n-1 && flag == 1) {
            count ++;
        }
         if(s[i] == '.' && flag  == 1) {
            if(s[i+1] == '.') {
                flag = 0;
            }
             count++;
        } else if(s[i] == '.' && flag == 0) {
            flag  = 1;
        }
    }
    cout << count ;
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