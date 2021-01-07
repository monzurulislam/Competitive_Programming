#include<bits/stdc++.h>
using namespace std;

///Equilibrium index of an array

int sum(int ara[],int n)
{
    int sum=0,leftSum=0,i;
    for(i=0; i<n; i++)
        sum+=ara[i];

    for(i=0; i<n; i++)
    {
        sum -= ara[i];

        if(sum==leftSum)
            return i;

        leftSum+=ara[i];
    }
    return -1;
}
/// 7 -7 1 5 2 -4 3 0(input)
int main()
{
    int n,i,ara[10000];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    cout<<sum(ara,n)<<endl;
    return 0;
}
