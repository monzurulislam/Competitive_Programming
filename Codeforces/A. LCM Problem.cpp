#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(2*n>m)
            cout<<"-1 -1"<<endl;
        else
            cout<<n<<' '<<n*2<<endl;
    }
    return 0;
}
