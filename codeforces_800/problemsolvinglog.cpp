#include<iostream>
#include<string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for( int i = 0; i < T; i++) {
        int N ;
        cin >> N ;
        string logs ;
        cin >> logs;
        int problemCount = 0;
        for ( int i = 1; i < 27 ; i++) {
            char A = i+64;
            int count = 0;
            for( int j = 0; j < N; j++) {
                if( A == logs[j]){
                    count += 1;
                }

                if( count == i ){
                    problemCount++;
                    break;
                }
            }
            if( problemCount > N ) {
                break;
            }
        }
        cout << problemCount << endl;
    }

    return 0;
}