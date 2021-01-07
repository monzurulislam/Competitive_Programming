#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        int diff=0,cnt=0;
        cin>>a>>b;
        diff = abs(b-a);
        if(diff==0)
            cout<<0<<endl;
        else if(diff%10)
            cout<<diff/10+1<<endl;
        else if(diff%10==0)
            cout<<diff/10<<endl;
        else if(diff<10)
            cout<<1<<endl;

    }
    return 0;
}
