#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve() {
    int n, m;
    cin >> n >> m;
    ll arr1[n];
    ll arr2[m];
    ll diffrenceSum = 0;
    for( int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for( int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m, greater<int>() );
    
    for( int i = 0; i < n; i++) {
        if((abs(arr1[i] - arr2[i]) < abs(arr1[i] - arr2[m-n+i]))){
            diffrenceSum +=  abs(arr1[i] - arr2[m-n+i]);
        }
        else{
            diffrenceSum += abs(arr1[i] - arr2[i]);
        };
    }
    cout << diffrenceSum ;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}