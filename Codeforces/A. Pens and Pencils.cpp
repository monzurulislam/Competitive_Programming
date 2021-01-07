#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,x,n=0,m=0,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>x;

        if(a%c==0)
        {
            m = a/c;
        }
        else
        {
            m = a/c + 1;
        }
        if(b%d==0)
        {
            n = b/d;
        }
        else
        {
            n = b/d + 1;
        }
        if(m+n<=x)
            cout<<m<<' '<<n<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
