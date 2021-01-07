#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans  = k + (k/n);
        cout<<ans<<endl;
    }
}
