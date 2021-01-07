#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    long long t,n,res,mes;
    cin>>t;
    while(t--)
    {
        res=0LL,mes=0LL;
        cin>>n;
        res = ((((n%mod)*(n%mod))%mod)*(n%mod))%mod;
        mes = ((n-1LL)%mod * (n-1LL)%mod)%mod;
        cout<<(res%mod)+(mes%mod)<<endl;
    }
    return 0;
}
