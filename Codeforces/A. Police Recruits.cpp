#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,ara[100090];
    cin>>t;
    int cnt=0;
    for(i=0; i<t; i++)
    {
        cin>>ara[i];
    }
    int crime=0,rec=0;
    for(i=0; i<t; i++)
    {
        if(ara[i]!= -1)
            rec+=ara[i];

        else if(ara[i]==-1 && rec<=0)
        {
            crime++;;
        }
        else if(ara[i]==-1 && rec>=1)
        {
            rec-=1;
        }
    }

    cout<<crime<<endl;

    return 0;
}
