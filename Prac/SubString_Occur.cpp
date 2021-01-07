#include <iostream>
using namespace std;

int count(string a,string b,int n,int m)
{
    if(n==0 && m==0 || m==0)
        return 1;
    if(n==0)
        return 0;

    if(a[n-1]==b[m-1])
        return count(a,b,n-1,m-1) + count(a,b,n-1,m);
    else
        return count(a,b,n-1,m);
}

int main()
{
    int n,m;
    string a,b;
    while(cin>>a>>b)
    {
        cout<<count(a,b,a.size(),b.size())<<endl;
    }
    return 0;
}
