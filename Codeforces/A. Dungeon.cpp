#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a+b+c)%9!=0)
            cout<<"No"<<endl;
        else if((a+b+c)/9 <= min(min(a,b),c))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
