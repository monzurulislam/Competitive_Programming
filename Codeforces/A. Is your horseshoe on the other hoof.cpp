#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;

    int cnt=0,ara[4],i;
    for(i=0; i<4; i++)
        cin>>ara[i];
    sort(ara,ara+4);
    for(i=1; i<4; i++)
    {
        if(ara[i-1]==ara[i])
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

