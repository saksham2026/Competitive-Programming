#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for( int i = 0; i < T; i++) {
        long long int greaterThan = 1;
        long long int lessThan = 1e9;
        int constraint;
        int arr[100];
        int length = 0;
        int n;
        int ans = 0;
        cin >> n;
        for( int i = 0; i < n; i++) {
            long long int a;
            cin >> constraint;
            cin >> a;
                if(constraint == 1){
                    greaterThan = max(greaterThan, a);
                }
                else if(constraint == 2) {
                    lessThan = min(lessThan, a);
                }
                else{
                    arr[length] = a;
                    length++;
                }
        }

        if( lessThan < greaterThan) {
            cout << 0 << endl;
            continue;
        }
        else{
            int count = 0;
            for( int i = 0; i < (length); i++){
                if(arr[i] <= lessThan && arr[i] >= greaterThan) {
                    count++;
                }
            }
            ans = lessThan - greaterThan - count + 1;
         }
        cout << ans << endl;

    }
    return 0;
}