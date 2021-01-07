#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,cnt=0,k,w;
    while(cin>>k>>n>>w)
    {
        long long sum = (w*(w+1))/2;
        if(sum*k<=n)
            cout<<"0"<<endl;
        else
            cout<<sum*k-n<<endl;
    }
    return 0;
}

