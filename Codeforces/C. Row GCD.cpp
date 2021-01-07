#include<bits/stdc++.h>
using namespace std;

long long ara[10000000],arr[10000000];

int main()
{
    long long i,n,m;
    cin>>n>>m;
    long long gcd=0;
    for(i=0; i<n; i++) cin>>ara[i];
    for(i=0; i<m; i++) cin>>arr[i];
    for(i=0; i<n-1; i++) gcd = __gcd(gcd,abs(ara[i+1]-ara[i]));
    for(i=0; i<m; i++) cout<<__gcd(gcd,ara[0]+arr[i])<<' ';

    return 0;

}



