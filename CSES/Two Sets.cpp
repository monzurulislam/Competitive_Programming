#include<bits/stdc++.h>
using namespace std;

vector<int>v1,v2;

int main()
{
    long long n,i,sum=0,flag;
    cin>>n;
    sum = n*(n+1)/2;
    //cout<<sum<<endl;
    if(sum%2==0)
    {
        if(n%4==0)
        {
            flag = 1;
            for(i=1; i<=4; i++)
            {
                v1.push_back(i);
            }
            for(i=0;i<=n/4;i++)
            {
                v1.push_back(n-i);
            }
            for(i=n/4+1;i<=n-v1.size();i++)
            {
                v2.push_back(i);
            }
        }
    }
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<' ';
    cout<<endl;
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<' ';
}
