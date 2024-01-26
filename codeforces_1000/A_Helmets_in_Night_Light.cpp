// Learning from the question, use pen and paper, do not write the code directly,
// Avoid the use of too much if-else, dry run the code always.

#include<bits/stdc++.h>
using namespace std;

#define ll long long
bool sortbyCond(const pair<ll, ll>& a,
                const pair<ll, ll>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

void solve() {
    ll n,p;
    cin >> n >> p;
    ll a[n], b[n];
    ll countSum = 0;
    ll count = 0;
    vector<ll> row(2,0);
    vector<pair<ll,ll>>c ;
    for( int i = 0; i < n; i++) cin >> a[i];
    for( int i = 0; i < n ; i++) cin >> b[i]; 
    for(int i = 0; i < n; i++) {
        c.push_back(make_pair(b[i],a[i]));
    }
    ll required = n;
    ll pointer = -1;
    sort(c.begin(), c.end() ,  sortbyCond);
    for(int i = 0; i < n; i++ ) {
        if(required > 0) {
            if(c[i].first >= p) {
                if( i > pointer) {
                    count++;
                    countSum += p;
                }
            }

            else if(i > pointer) {
                count++;
                countSum += p;
                pointer = i;
                required = n - count;
                if(required > 0) {
                    count += min(required,c[i].second);
                    countSum += min(required,c[i].second)*c[i].first;
                    pointer +=  min(required,c[i].second);
                }
            } else{
                count += min(required,c[i].second);
                pointer += min(required,c[i].second);
                countSum += min(required,c[i].second)*c[i].first;
            }
            required = n - count;
        } else {
            break;
        }
    }
    cout << countSum ;
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

// Vaibhav Singhs Solution


// #include<bits/stdc++.h>
// using namespace std;

// bool sortbyCond(const pair<int, int>& a,
//                 const pair<int, int>& b)
// {
//     if (a.first != b.first)
//         return (a.first < b.first);
//     else
//        return (a.second > b.second);
// }

// #define ll long long
// void solve() {
    
// ll n,p;
//     cin >> n >> p;
//     ll a[n], b[n];
//     vector<pair<ll,ll>>c ;
//     for( int i = 0; i < n; i++) cin >> a[i];
//     for( int i = 0; i < n ; i++) cin >> b[i]; 
//     for(int i = 0; i < n; i++) {
//         c.push_back(make_pair(b[i],a[i]));
//     }
//     sort(c.begin(), c.end() ,  sortbyCond);
            

//     ll prevPointer = 0;
//     ll nextPointer = 0;
//     ll ans = p;

//     if(c[0].first<=p){
//         nextPointer = min(c[0].second, max((ll)0, n-1));
//         ans+= (nextPointer - prevPointer) * c[0].first;
//     }

    
    
//     for(int i = 1; i<n;i++){
//         if(c[i].first <= p) {
//             prevPointer = nextPointer;
//             nextPointer = min(c[i].second + prevPointer, max((ll)0,n-1));
//             ans+= (nextPointer - prevPointer) * c[i].first;
//         }
//         else{
//             if(i>nextPointer) ans+=p;
//         }
//     }

//     cout << ans;
//     cout << endl;
    
// }


// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         solve();
//     }

//     return 0;
// }