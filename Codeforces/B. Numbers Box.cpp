#include<bits/stdc++.h>
using namespace std;

int ara[200][200];

int main()
{
    int n,m,i,j,sum,mn,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int cnt=0,sum=0,mn=99999999;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>ara[i][j];
                sum+=abs(ara[i][j]);
                if(ara[i][j]<0)
                    cnt++;
                mn=min(abs(ara[i][j]),mn);
            }
        }
        if(cnt%2==0)
            cout<<sum<<endl;
        else
        {
            cout<<sum-(mn)<<endl;
        }
    }
    return 0;
}
