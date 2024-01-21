#include<bits/stdc++.h>
using namespace std;

bool isConsonant(char A) {
    string s = "bcd";
    int count = 0;
    for( int i = 0; i < s.length() ; i++) {
        if(s[i] == A) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;

    cin >> T;

    for( int i = 0; i < T; i++){
        int N;
        cin >> N;
        string s;
        cin >> s;
        int j = 0;
        string result = "";
        string dot = ".";

        while(true) {
            if(j+2 == N) {
                result += s.substr(j,2);
                break;
            }
            if(j+3 == N) {
                result += s.substr(j, 3);
                break;
            }

            if(isConsonant(s[j+3])){
                result+= (s.substr(j, 3) + dot) ;
                j+=3;
            }
            else{
                result += (s.substr(j, 2) + dot);
                j+=2;
            }
        }
        cout << result << endl;
    }
    return 0;
}