#include<bits/stdc++.h>
using namespace std;

vector<int>vec;

int main()
{
    int n,t,i,ara[100000];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    int j = n-1;
    i=0;

    while(i<=j)
    {
        vec.push_back(max(ara[i],ara[j]));
        if(ara[i]>ara[j])
            i++;
        else
            j--;
    }
    int sum=0,tum=0;
    for(i=0; i<vec.size(); i++)
        {
            if(i%2==0)
                sum+= vec[i];
            else
                tum+=vec[i];
        }
    cout<<sum<<' '<<tum<<endl;

    return 0;
}
