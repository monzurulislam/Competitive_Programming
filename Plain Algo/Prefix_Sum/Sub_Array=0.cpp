///Find if there is a subarray with 0 sum
#include<bits/stdc++.h>
using namespace std;

int zero(int ara[],int n)
{
    int sum=0,i;
    unordered_set<int>st;
    for(i=0; i<n; i++)
    {
        sum+=ara[i];

        if(sum==0 ||  st.find(sum) != st.end())
            return true;

        st.insert(sum);
    }
    return false;
}
///5 -3 2 3 1 6(input)

int main()
{
    int n,i,ara[10000];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    if(zero(ara,n))
        cout<<"Sum zero exits."<<endl;
    else
        cout<<"Sum zero does n!t exits."<<endl;

    return 0;
}
