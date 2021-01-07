#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=1,b=1,c=1,n=1,ara[15500];
    int x,y,z;
    ara[1]=1;

    while(n != 15000)
    {
        x = 2*ara[a];
        y = 3*ara[b];
        z = 5*ara[c];

        ara[n++] = min(x,min(y,z));

        if(ara[a]==n)
            a++;
        if(ara[b]==n)
            b++;
        if(ara[c]==n)
            c++;

    }
     cout<<"The 1500'th ugly number is "<<ara[1500]<<"."<<endl;
     return 0;
}
