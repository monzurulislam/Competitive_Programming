#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,ara[100090],k;
    cin>>t>>k;
    for(i=0; i<t; i++)
        cin>>ara[i];

    sort(ara,ara+t);
    int cnt=0;
    for(i=0; i<t; i++)
    {
        if(ara[i]+k<=5)
            cnt++;
    }
    cout<<cnt/3<<endl;
    return 0;
}

