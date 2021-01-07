#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,i,t;
    cin>>t;
    while(t--)
    {
        int flag = 0;
        cin>>a>>b>>c;
        int n=a;

        for(i=0; i<b; i++)
        {
            a = (a/2) + 10;
        }

        for(i=0; i<c; i++)
        {
            a = a - 10;
        }

        int cnt = 0;
        if(a>=1)
        {
            for(i=0; i<c; i++)
            {
                n = n - 10;
                if(n<=0)
                {
                    flag=1;
                    break;
                }
            }
            for(i=0; i<b; i++)
            {
                n = (n/2) + 10;
            }

            if(flag)
                cnt=1;
            else
                cnt = 0;

        }
        if(a<=0 || cnt==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
