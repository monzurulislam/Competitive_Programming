#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ara[10000],i,cnt,cas=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>ara[i];
        int cnt=0,temp=0;
        for(i=0; i<n; i++)
        {
            if(ara[i] != i+1)
            {
                while(ara[i] != i+1)
                {
                    temp = ara[ara[i]-1];
                    ara[ara[i]-1] = ara[i];
                    ara[i] = temp;
                    cnt++;
                }
            }
        }
        cas++;
        cout<<"Case "<<cas<<": "<<cnt<<endl;
    }
    return 0;
}
