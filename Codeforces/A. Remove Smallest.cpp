#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,ara[100090],t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>ara[i];
        sort(ara,ara+n);
        int flag=0;
        for(i=1; i<n; i++)
        {
            if((ara[i]-ara[i-1])>1)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}

