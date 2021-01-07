#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c,ara[4],i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>ara[i];

        sort(ara,ara+n);
        if(n==1)
            cout<<ara[0]<<endl;
        if(n==2)
            cout<<max(ara[0],ara[1])<<endl;
        if(n==3)
            cout<<max((ara[0]+ara[1]),ara[2])<<endl;
        if(n==4)
        {
            int m = ara[0]+ara[1]+ara[2];
            if(m<=ara[3])
                cout<<max(m,ara[3])<<endl;
            else if(m-1==ara[3])
                cout<<m<<endl;
            else
                cout<<max((ara[3]+ara[0]),(ara[1]+ara[2]))<<endl;
        }
        ara[4]= {0};

    }
    return 0;
}
