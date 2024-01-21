#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans[n] = {1};
    string s2  = "";
    s2[0] = s[0]; 
    int unique = 1;
    for( int i = 1; i < n; i++) {
        if(unique < 26){
            for( int j = 0; j < unique; j++) {
                if(s[i] == s2[j]) {
                    ans[i] = unique;
                    break;
                }
            }
            if( ans[i] == 0) {
                s2[unique] = s[i]; 
                unique++;
                ans[i] = unique;
            }

        }
        else{
            ans[i] = unique;
        }
    }
    int a = 0;
    for( int i = 0; i < n; i++) {
        a += ans[i];
    }
    cout << a ;

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