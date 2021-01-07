#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ara[200090],t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int m=2,sum=0,tum=0;
        for(i=0; i<n/2; i++)
        {
            ara[i]=m;
            tum+=ara[i];
            m+=2;
        }
        int p=1;
        for(i=n/2; i<n; i++)
        {
            ara[i]=p;
            sum+=ara[i];
            p+=2;
        }

        ara[n-1]=ara[n-1]+tum-sum;
        if(ara[n-1]%2==0)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=0; i<n; i++)
                cout<<ara[i]<<' ';
            cout<<endl;
        }
    }
    return 0;
}

