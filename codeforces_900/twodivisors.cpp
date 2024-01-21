#include <bits/stdc++.h>
using namespace std;

long long int HCF(long long int A, long long int B)
{
    long long int HCF = 1;
    if (A == B)
    {
        HCF = A;
    }
    if (A > B)
    {
        for (long long int i = 2; i <= B; i++)
        {
            if ((B % i == 0) && (A % i == 0))
            {
                HCF = i;
            }
        }
    }
    else
    {
        for (long long int i = 2; i <= A; i++)
        {
            if ((B % i == 0) && (A % i == 0))
            {
                HCF = i;
            }
        }
    }
    return HCF;
}

int main()
{
    int T;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        long long int A, B;
        cin >> A >> B;

        if(B%A==0){
            cout<<B*(B/A)<<endl;
        }
        else
        {   
            cout << B * (A/__gcd(A, B)) << endl;
        }

        
    }
    return 0;
}