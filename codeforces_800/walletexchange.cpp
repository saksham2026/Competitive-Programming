#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for( int i = 0; i<T; i++) {
        int A, B;

        cin >> A >> B;

        if( A == B ) {
            cout << "Bob" << endl;
            continue;
        }

        if((A-B)%2 == 0) {
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }
    return 0;
}