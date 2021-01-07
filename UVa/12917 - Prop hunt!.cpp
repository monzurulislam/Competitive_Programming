#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,guli;
    while(cin>>a>>b>>c)
    {
        if(b<c)
            guli = c-b;
        else
            guli=0;
        if(guli<a)
            cout<<"Hunters win!"<<endl;
        else
            cout<<"Props win!"<<endl;
    }
    return 0;
}
