#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,a,b,c,d,p,q,m,k;
    scanf("%d",&t);

    while(t--)
    {
        cin>>n>>a>>b>>c>>d;

        p = n*(a + b);
        q = n*(a - b);
        m = c + d;
        k = c - d;

        if(q<=m && p>=k )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
