#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,b,c,d,i;
    scanf("%d",&x);
    for(i=0; i<9000; i++)
    {
        x++;
        n=x;
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n;
        if(a!=b&&b!=c&&c!=d&&b!=d&&a!=d&&c!=a)
        {
            printf("%d%d%d%d\n",d,c,b,a);
            return 0;
        }
    }
}
