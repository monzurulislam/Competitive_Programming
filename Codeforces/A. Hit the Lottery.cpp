#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i;
    while( cin>>n)
    {
        int p=0,q=0,r=0,s=0;
        if(n>=100)
        {
            p = (n/100);
            n=n-100*(n/100);
        }
        if(n>=20)
        {
            q=(n/20);
            n=n-20*(n/20);
        }
        if(n>=10)
        {
            s = (n/10);
            n = n-10*(n/10);
        }
        if(n>=5)
        {
            r=(n/5);
            n=n-5*(n/5);
        }
        cout<<p+q+r+s+n<<endl;
    }
    return 0;
}
