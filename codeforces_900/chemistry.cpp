#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for( int i = 0; i < T; i++) {
        int n, k;
        cin >> n >> k;
        int arr[n] = {0};
        string s;
        cin >> s;
        if((n-k) == 1){
            cout << "YES" << endl;
            continue;
        }
        int pairsCount = 0;
        int singleCount = 0;
        int count = 0;
        for( int i = 0; i < n; i++) {
            if( arr[i] == 0) {
                count = 0;
                for( int j = i; j < n; j++) {
                    if(s[i] == s[j]){
                        count++;
                        arr[j] = 1;
                    }
                }
                pairsCount += (count/2);
            }
        }

        singleCount = n - 2*pairsCount;

        if( singleCount > k) {
            if( singleCount - k > 1) {
                cout << "NO" << endl;
                continue;
            }
            else{
                cout << "YES" << endl;
                continue;
            }
        }
        else{
            cout << "YES" << endl;
            continue;
        }
    }
    return 0;
}