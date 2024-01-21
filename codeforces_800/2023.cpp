#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;


    for( int i = 0; i < T; i++) {
        long long int N, K;
        long long int product = 1;
        cin >> N >> K;

        int arr[N] ;

        for(int i = 0; i < N; i++) {
            cin >> arr[i] ;
            product *= arr[i] ;
        }

        if(2023%product != 0) {
            cout << "NO" << endl;
            continue;
        }

        if(product == 2023) {
            cout << "YES" << endl ;
            for( int i = 0; i < K; i++) {
                cout << 1 << " ";
                if( i == K-1){
                    cout << endl;
                }
            }
            continue;
        }

        int remaining = 2023/product;

            cout << "YES" << endl;
        for( int i = 0; i < K; i++) {
            if(i==0) {
                cout << remaining << " ";
            }
            else{
                cout << 1 << " ";
            }
        }

        cout << endl;

    }
    return 0;
}