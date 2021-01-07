#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,n,j,ara[100090];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            ara[i] = pow(2,i+1);
        }
        int sum = ara[n-1];
        for(i=0;i<n/2-1;i++)
        {
            sum += ara[i];
        }
        int sum1=0;
        for(i=n/2-1;i<n-1;i++)
        {
            sum1 += ara[i];
        }
        cout<<abs(sum1-sum)<<endl;
    }
    return 0;
}
