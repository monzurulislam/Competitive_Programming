#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t;
    int ara[100090];
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        stringstream ss(s);
        int j=0,mx=-1,i,k;
        while(ss>>ara[j])
            j++;
        for(i=0; i<j; i++)
        {
            for(k=i+1; k<j; k++)
            {
                mx=max(__gcd(ara[i],ara[k]),mx);
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
