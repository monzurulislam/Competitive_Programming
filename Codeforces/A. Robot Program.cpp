#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x<y)
            cout<<x*2+((y-x)*2)-1<<endl;
        else if(x>y)
            cout<<y*2+((x-y)*2)-1<<endl;
        else
            cout<<x+y<<endl;
    }

    return 0;
}
