#include<bits/stdc++.h>
using namespace std;

int ara[100];

bool Closest_Sum(int n,int x)
{
    int l,r,diff=INT_MAX;
    l = 0;
    r = n-1;
    int ans_1=0,ans_2=0;
    while(l<r)
    {
        if(abs(ara[l]+ara[r] - x)<diff)
        {
            ans_1=l;
            ans_2=r;
            diff = abs(ara[l]+ara[r] - x);
        }
        if(ara[l]+ara[r]<x)
            l++;
        else
            r--;
    }
    cout<<ara[ans_1]<<' '<<ara[ans_2]<<endl;
    return 0;
}

int main()
{
    int n,x,i;
    cin>>n>>x;
    for(i=0; i<n; i++)
        cin>>ara[i];
    Closest_Sum(n,x);
    return 0;
}


/**** check for pair in A[] with sum as x****
int ara[100];

bool Close_Sum(int n,int x)
{
    int l,r;
    l = 0;
    r = n-1;
    while(l<r)
    {
        if(ara[l]+ara[r] == x)
            return 1;
        else if(ara[l]+ara[r] < x)
            l++;
        else if(ara[l]+ara[r]>x)
            r--;
    }
}

int main()
{
    int n,x,i;
    cin>>n>>x;
    for(i=0; i<n; i++)
        cin>>ara[i];
    if(Close_Sum(n,x))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}*/
