#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,cnt=0,ara[1000];
    while(cin>>n>>k)
    {
        for(i=1; i<=n; i++)
            cin>>ara[i];
        for(i=1; i<=n; i++)
        {
            if(ara[k]<=ara[i] && ara[i]>0)
                cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
