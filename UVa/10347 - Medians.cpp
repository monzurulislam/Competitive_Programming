#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,a,b,c,s;
    while(cin>>a>>b>>c)
    {
        s = (a+b+c)/2.0;
        double ans = (4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c)));
        if(ans>0)
            printf("%0.3f\n",ans);
        else
            cout<<"-1.000"<<endl;

        ans=0.0;
    }
    return 0;
}
