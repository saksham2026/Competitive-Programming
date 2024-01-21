#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb(e) push_back(e)
#define sv(a) sort(a.begin(), a.end())
#define sa(a, n) sort(a, a + n)
#define mp(a, b) make_pair(a, b)
#define all(x) x.begin(), x.end()
#define fo(i, a, b) for (ll i = a; i < b; i++)
#define unique(v) v.erase(std::unique(v.begin(), v.end()), v.end());
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

string solve()
{
    int n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;
    int flag = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] != c[i] && b[i] != c[i]) {
            flag+=1;
            return "YES";
        }
    }
    return "NO";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() ;
        cout << endl;
    }
    return 0;
}