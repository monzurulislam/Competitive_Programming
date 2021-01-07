#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,ara[100090];
    cin>>t;
    for(i=0; i<t; i++)
        cin>>ara[i];

    sort(ara,ara+t);

    int n = ara[t-1],sum=0;

    for(i=0; i<t; i++)
        sum += n - ara[i];

    cout<<sum<<endl;
    return 0;
}

