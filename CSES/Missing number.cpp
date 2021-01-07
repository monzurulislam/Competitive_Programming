#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i,sum=0;
    cin>>t;
    for(i=0;i<t-1;i++)
    {
        cin>>n;
        sum += n;
    }
    long long p = t*(t+1)/2;
    cout<<p - sum<<endl;
    return 0;
}
