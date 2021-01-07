#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,n,i;
    string s1,s2;
    scanf("%d %d %d",&a,&b,&x);
    for(i=0;i<a;i++)
        s1 = "0"+ s1;
    for(i=0;i<b;i++)
        s2 = "1" + s2;
    if(x==1)
        cout<<s1<<s2<<endl;

    else if(x%2==0)
    {
        if(a>b)
        {
            for(i=0; i<x/2; i++)
                cout<<"01";
            for(i=0; i<b-(x/2); i++)
                cout<<"1";
            for(i=0; i<a-(x/2); i++)
                cout<<"0";

        }
        else if(a<=b)
        {

            for(i=0; i<x/2; i++)
                cout<<"10";
            for(i=0; i<a-(x/2); i++)
                cout<<"0";
            for(i=0; i<b-(x/2); i++)
                cout<<"1";
        }
    }
    else if(x%2==1)
    {
        if(a>b)
        {
            for(i=0; i<x/2; i++)
                cout<<"01";
            for(i=0; i<a-(x/2); i++)
                cout<<"0";
            for(i=0; i<b-(x/2); i++)
                cout<<"1";

        }
        else if(a<=b)
        {

            for(i=0; i<x/2; i++)
                cout<<"10";
            for(i=0; i<b-(x/2); i++)
                cout<<"1";
            for(i=0; i<a-(x/2); i++)
                cout<<"0";
        }
    }
    return 0;

}
