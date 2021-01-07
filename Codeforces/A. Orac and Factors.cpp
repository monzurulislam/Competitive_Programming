#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n + (k*2)<<endl;
        }
        else
        {
            int cnt = 0;
            for(i=3;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    cnt = i;
                    break;
                }
            }
            if(cnt != 0)
                cout<<(n+cnt)+ ((k-1)*2)<<endl;
            else
            {
                cout<<(n+n)+((k-1)*2)<<endl;
            }
        }
    }
    return 0;
}
