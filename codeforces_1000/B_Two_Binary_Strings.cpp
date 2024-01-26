#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    ll n = s1.length();

    for( ll i = 0; i < n-1; i++) {
        if(s1[i] == '0' && s2[i] == '0' && s1[i+1] == '1' && s2[i+1] == '1') {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
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