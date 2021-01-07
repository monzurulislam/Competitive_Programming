#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,ara[3],i;
    cin>>t;
    while(t--)
    {
        for(i=0; i<3; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+3);
        if(ara[0]+ara[1]>ara[2])
            cout<<"OK"<<endl;
        else
            cout<<"Wrong!!"<<endl;
    }
    return 0;
}
