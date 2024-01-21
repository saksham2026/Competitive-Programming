#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    string ans = "";
    int n = s.length() ;
    int lastLowercase[n] ;
    int lastUppercase[n] ;
    int lowerPointer = 0;
    int upperPointer = 0;
    for( int i = 0; i < n; i++) {
        lastLowercase[i] = -1;
        lastUppercase[i] = -1;
    }
    for( int i = 0; i < n; i++) {

        if(s[i] == 'b') {
            if(lowerPointer > 0) {
                s[lastLowercase[--lowerPointer]] = '0';
            }
        }
        else if( s[i] == 'B') {
            if(upperPointer > 0) {
                s[lastUppercase[--upperPointer]] = '0';
            }
        }
        else{
            int a  = s[i];
            if( a < 91) {
                lastUppercase[upperPointer] = i;
                upperPointer++;
            }
            else{
                lastLowercase[lowerPointer] = i;
                lowerPointer++;
            }
        }
    }
    for( int i = 0; i < n; i++) {
        if(s[i] != 'B' && s[i] != 'b' && s[i] != '0') {
            cout << s[i];
        }
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