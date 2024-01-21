#include<bits/stdc++.h>
using namespace std;

int  solve() {
    int arr1[2];
    int arr2[2];
    int arr3[2];
    int arr4[2];
    cin >> arr1[0] >> arr1[1];
    cin >> arr2[0] >> arr2[1];
    cin >> arr3[0] >> arr3[1];
    cin >> arr4[0] >> arr4[1];

    int d1 = sqrt((arr1[0] - arr2[0])*(arr1[0] - arr2[0]) + (arr1[1] - arr2[1])*(arr1[1] - arr2[1]) );
    int d2 = sqrt((arr1[0] - arr3[0])*(arr1[0] - arr3[0]) + (arr1[1] - arr3[1])*(arr1[1] - arr3[1]) );
    int d3 = sqrt((arr1[0] - arr4[0])*(arr1[0] - arr4[0]) + (arr1[1] - arr4[1])*(arr1[1] - arr4[1]) );
 

    if( d1 != d2) {
        int c = min(d1,d2);
        return c*c;
    }
    else{
        int c = min(d1,d3);
        return c*c;
    }

}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cout << solve() ;
        cout << endl;
    }
    return 0;
}
