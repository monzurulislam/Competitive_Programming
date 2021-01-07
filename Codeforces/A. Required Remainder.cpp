#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t,k;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>a>>b>>k;
        int n = k/a;
        n = n*a;
        if(n+b>k)
        {
            cout<<n-a+b<<endl;
        }
        else
            cout<<n+b<<endl;
    }
    return 0;
}

