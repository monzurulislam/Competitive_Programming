#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(!(n&1))
        cout<<(n/2+1)*(n/2+1)<<endl;
    else
        cout<<2*(n/2+1)*(n/2+2)<<endl;
    return 0;
}
