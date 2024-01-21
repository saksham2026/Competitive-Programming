#include <iostream>
using namespace std;

string solve() {
    long long n, f, a, b;
    cin >> n >> f >> a >> b;

    long long arr[n];
    for( int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
    long long unitSum = arr[0]*a;
    int isOnflag = 1;
    if(arr[0]*a > b) {
        isOnflag = 0;
        unitSum = 0;
    }
    for( int i = 0; i < n; i++) {
        if(isOnflag) {
            if(i != 0) {
                unitSum += (arr[i] - arr[i-1])*a;
            }
            if(unitSum >= f) {
                return "NO";
            }
        }
        else{
            unitSum += b;
            isOnflag = 1;
            if(unitSum >= f) {
                return "NO";
            }
        }
        if(i != n-1) {
            if((arr[i+1] - arr[i])*a > b) {
                isOnflag = 0;
            }
        }
    }
        return "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve();
        cout << endl;
    }
    return 0;
}