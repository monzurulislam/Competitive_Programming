#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=3,i,ara[3];
    int cnt=0;
    for(i=0; i<t; i++)
        cin>>ara[i];
    sort(ara,ara+3);
    cout<<ara[1]-ara[0]+ara[2]-ara[1]<<endl;

    return 0;
}
