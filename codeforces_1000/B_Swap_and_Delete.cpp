#include<bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for( int i = 0; i < n; i++) {
        if(s[i] == '1') {
            count ++;
        }
    }
    count = min(count, n-count);
    int i = 0;
    int countOne = count;
    int countZero = count;
    while(countOne > -1  and countZero > -1 and i < n+1) {
            if(s[i] == '1') {
                s[i] = '0';
                countOne--;
            }
            else {
                s[i] = '1';
                countZero--;
            }
        i++;
    }      
        cout << n - i + 1;
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
