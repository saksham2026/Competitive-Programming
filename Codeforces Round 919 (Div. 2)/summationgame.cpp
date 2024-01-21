#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    for( int i = 0; i < T; i++) {
        int n, k, x;
        cin >> n >> k >> x;
        long long arraySum = 0; 
        int arr[n];
        for( int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr+n);

        for( int i = n-1; i >= n-x; i--) {
            arr[i]*=-1;
        }
        for( int i = 0; i < n; i++) {
                arraySum += arr[i];
        }
        int j = n-1;
        long long m = arraySum ;
        int count = 0;
        while(count < k && j > -1) {
                if( j-x < 0){
                    arraySum -= arr[j] ;
                }
                else{
                     arraySum -= arr[j] + 2*arr[j-x];
                     arr[j-x] *= -1;
                }
                m = max(m, arraySum);
                count++;
                j--;
        }

        cout << m;
        cout << endl;
        
    }
    return 0;
}