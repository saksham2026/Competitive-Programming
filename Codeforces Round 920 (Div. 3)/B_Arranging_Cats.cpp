#include<bits/stdc++.h>
using namespace std;

int  solve() {
    int n;
    string s, f;
    cin >> n ;
    cin >> s ;
    cin >> f;
    int remove = 0;
    int add = 0;
    for( int i = 0; i < n; i++) {
        if(s[i] == f[i]) {
            continue;
        }
        else{
            if(s[i] == '1') {
                remove++;
            }
            else{
                add++;
            }
        }
    }
    return max(add, remove);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cout << solve();
        cout << endl;
    }
    return 0;
}