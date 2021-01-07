#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,i;
    while(cin>>n)
    {
        int sum=0,mx=-1;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            sum -= a;
            sum+=b;
            mx=max(mx,sum);
        }
        cout<<mx<<endl;
    }
    return 0;
}

