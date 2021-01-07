#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ara[100090],t;
    while(cin>>n)
    {
        int cnt=0,mn=999999999,mx=-1;
        for(i=0; i<n; i++)
            cin>>ara[i];
        if(n==1)
            cout<<"0"<<endl;
        else
        {
            if(ara[1]>ara[0] || ara[1]<ara[0])
            {
                mx=max(ara[1],ara[0]);
                mn=min(ara[1],ara[0]);
                cnt++;
            }
            else
            {
                mx=max(ara[1],ara[0]);
                mn=min(ara[1],ara[0]);
            }

            for(i=2; i<n; i++)
            {
                if(ara[i]>mx)
                {
                    cnt++;
                    mx = max(ara[i],mx);
                }
                else if(ara[i]<mn)
                {
                    cnt++;
                    mn=min(ara[i],mn);
                }
            }
            cout<<cnt<<endl;
        }

    }
    return 0;
}

