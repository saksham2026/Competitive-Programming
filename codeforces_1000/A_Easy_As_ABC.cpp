#include<bits/stdc++.h>
using namespace std;
// ICPC Question
void solve() {
    char arr[3][3];
    vector<string>ans;
    int pointer = 0;
    int countA = 0;
    int countB = 0;
    int countC = 0;
    for( int i = 0; i < 3; i++) {
        for( int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 'A') {
                countA++;
            }
            else if(arr[i][j] == 'B') {
                countB++;
            }
            else{
                countC++;
            }
        }
    }
    for( int i = 0; i < 3; i++) {
        for( int j = 0; j < 3; j++) {
            if(countA > 0) {
                string s;
                if(arr[i][j] == 'A') {
                    s = "AZZ";
                    int c = s[1];
                    for( int m = 0; m < 3; m++) {
                        for( int n = 0; n < 3; n++) {
                            if(abs(i-m) < 2 && abs(j - n) < 2 && (i!=m || j!=n)) {
                                int b = arr[m][n];
                                c = min(c,b);
                            }
                        }
                    }
                    s[1] = c;
                    c = 90;
                    for( int x = 0; x < 3; x++) {
                        for( int y = 0; y < 3; y++) {
                            if(arr[x][y] == s[1] && (x!=i || y!=j) && abs(x-i) < 2 && abs(y-j) <2 ) {
                                for( int m = 0; m < 3; m++) {
                                    for( int n = 0; n < 3; n++) {
                                        if(abs(x-m) < 2 && abs(y - n) < 2 && (x!=m || y!=n) && (m!=i || n!=j)) {
                                            int b = arr[m][n];
                                            c = min(c,b);
                                        }
                                    }
                                 }
                            }
                        }
                    }
                    s[2] = c;
                }
                ans.push_back(s);
            }
            else if(countB > 0) {
                string s;
                if(arr[i][j] == 'B') {
                    s = "BZZ";
                    int c = s[1];
                    for( int m = 0; m < 3; m++) {
                        for( int n = 0; n < 3; n++) {
                            if(abs(i-m) < 2 && abs(j - n) < 2 && (i!=m || j!=n)) {
                                int b = arr[m][n];
                                c = min(c,b);
                            }
                        }
                    }
                    s[1] = c;
                    c = 90;
                    for( int x = 0; x < 3; x++) {
                        for( int y = 0; y < 3; y++) {
                            if(arr[x][y] == s[1] && (x!=i || y!=j) && abs(x-i) < 2 && abs(y-j) <2) {
                                for( int m = 0; m < 3; m++) {
                                    for( int n = 0; n < 3; n++) {
                                        if(abs(x-m) < 2 && abs(y - n) < 2 && (x!=m || y!=n) && (m!=i || n!=j)) {
                                            int b = arr[m][n];
                                            c = min(c,b);
                                        }
                                    }
                                 }
                            }
                        }
                    }
                    s[2] = c;
                }
                ans.push_back(s);
            }
            else{
                ans.push_back("CCC");
            }
        }
    }


sort(ans.begin(), ans.end());
for (const auto& s : ans) {
    if(s!="") {
        cout << s;
        break;
    }
}
  
}

int main() {
       solve();
    // char c;
    // int a  = 80;
    // c = a;
    // cout << c ;
       cout << endl;
    return 0;
}