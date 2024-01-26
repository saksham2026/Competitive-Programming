// #include<iostream>
// using namespace std;

// void solve() {
//     string s;
//     cin >> s;

//     int n = s.length();
//     int carry = 0;
//     string max = s;
//     if(s[0] >='5') {
//         cout << "1";
//         for( int i = 0; i < n; i++) {
//             cout << "0";
//         }
//         return;
//     }
//     for( int i = n-1; i > -2; i--) {
//         if(i == -1) {
//             if(carry == 1) {
//                 s[0] = '0';
//                 string a = "1";
//                 max = a+s;
//             }
//         } else{
//             if(carry == 1) {
//                 if(s[i] == '9') {
//                     s[i] = '0';
//                 } else{
//                     s[i] = s[i] + 1;
//                     carry = 0;
//                 }
//                 max = s;
//             }
//             if(s[i] >= '5') {
//                 carry = 1;
//             }
//             if(i != 0) {
//                 s[i] = '0';
//             }
//         }
//     }
//     cout << max ;
// }

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         solve();
//         cout << endl;
//     }
//     return 0;
// }

// Method 2 // More fast solution

#include<iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    int index = n;

    if(s[0] >= '5') {
        cout << "1";
        for( int i= 0; i < n; i++) {
            cout << "0";
        }
        return;
    }

    for( int i = n-1; i >0; i--) {
        if(s[i] >= '5') {
            s[i-1]++;
            index = i;
        }
    }

    if(s[0] >= '5') {
        cout << "1";
        for( int i= 0; i < n; i++) {
            cout << "0";
        }
        return;
    }

    for( int i = n-1; i >= index; i--) {
        s[i] = '0';
    }
    for( int i = 0; i < n; i++) {
        cout << s[i];
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
        cout << endl;
    }
    return 0;
}