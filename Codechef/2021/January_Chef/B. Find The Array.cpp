#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,ara[100],i;
    cin>>t;
    while(t--)
    {
        long long x,esum=0,osum=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>x;
            ara[i]=x;
            if(x%2==1)
                osum+=x;
            else
                esum+=x;
        }
        cout<<osum<<' '<<esum<<endl;
        if(esum<osum)
        {
            for(i=0; i<n; i+=2)
            {
                ara[i]=1;
            }
        }
        else
        {
            for(i=0; i<n; i+=2)
            {
                ara[i]=1;
            }
        }
        for(auto i:ara)
            cout<<ara[i]<<' ';
    }
    return 0;
}
