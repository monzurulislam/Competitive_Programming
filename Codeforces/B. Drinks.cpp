#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,a,b,c,tot=0.0,ans=0.0;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>a;
            tot += (a/100.0);
        }
        ans = tot/n;
        printf("%0.5f\n",ans*100.0);
    }
    return 0;
}
