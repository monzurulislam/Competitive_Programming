#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>a>>b;
        sum = min(a,b)+min(a,b);
        if(sum>=max(a,b))
        {
            cout<<sum*sum<<endl;
        }
        else
            cout<<max(a,b)*max(a,b)<<endl;
    }
    return 0;
}
