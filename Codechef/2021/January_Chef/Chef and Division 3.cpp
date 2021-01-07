#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,k,d,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        long long sum=0LL,res=0LL;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            sum+=x;
        }
        res = sum/k;
        if(res>=d)
            cout<<d<<endl;
        else
            cout<<res<<endl;
    }
    return 0;
}
