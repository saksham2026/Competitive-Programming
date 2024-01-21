#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for( int i = 0; i < T; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int k = 0;
        for( int i = 0; i < n-1; i++) {
            if(s[i] == 'A') {
                k++;
                    if(s[i+1] == 'B') {
                        count += k;
                        swap(s[i], s[i+1]);
                        k = 0;
                    }
            }
        }
        cout << count << endl;
    }
    return 0;
}