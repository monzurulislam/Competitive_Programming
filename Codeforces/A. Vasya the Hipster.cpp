#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int mn = min(n,m);
    int mx = max(n,m)-mn;
    cout<<mn<<" "<<mx/2<<endl;
    return 0;
}
