#include <bits/stdc++.h>
using namespace std;

int ara[20000];

int main()
{
    int n,m,k,i,qi;
    int sum,cnt=0,mx;
    cin>>n>>m>>k;
    while(n--)
    {
        sum=0,mx=-1;
        for(i=0; i<k; i++)
            {
                cin>>ara[i];
            }
        cin>>qi;
        for(i=0; i<k; i++)
            sum+=ara[i];
        //cout<<sum<<endl;

        if(sum>=m and qi<=10)
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

