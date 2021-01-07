#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[6],x=0,t;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<5; i++)
            cin>>ara[i];
        int cnt=0;
        x=ara[0];
        for(int i=1; i<5; i++)
        {
            if(x+i==ara[i])
                cnt++;
        }
        if(cnt==4)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
}
