#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 and b==0)
            break;
        int n = floor(sqrt(b));
        int m = ceil(sqrt(a));
        cout<<(n-m)+1<<endl;
    }
    return 0;
}
