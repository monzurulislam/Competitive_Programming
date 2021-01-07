#include<bits/stdc++.h>
using namespace std;

long long ara[100090],bra[100090];


int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long mn=999999999999,mx=9999999999999;

        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            mx = min(ara[i],mx);

        }
        for(i=0; i<n; i++)
        {
            cin>>bra[i];
            mn = min(bra[i],mn);
        }
        //cout<<mx<<" "<<mn<<endl;

        long long sum=0;
        for(i=0; i<n; i++)
        {
            sum += max(ara[i]-mx,bra[i]-mn);
        }
        cout<<sum<<endl;


    }

    return 0;
}

