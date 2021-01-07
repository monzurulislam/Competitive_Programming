#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,ara[1000],temp=0;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    int cnt=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara[j] > ara[j+1])
            {
                cnt++;
                temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
    cout<<cnt<<endl;
    for(i=0; i<n; i++)
    {
        cout<<ara[i]<<endl;
    }
    return 0;

}
