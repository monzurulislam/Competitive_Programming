#include<bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    int m = sqrt(n);
    for(int i=2; i<=m; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n==4)
        {
            cout<<n<<":"<<'\n'<<"2+"<<n-2<<endl;
            continue;
        }
        if(n%2==1)
        {
            if(prime(n-2))
            {
                cout<<n<<":"<<'\n'<<"2+"<<n-2<<endl;
            }
            else
                cout<<n<<":"<<'\n'<<"NO WAY!"<<endl;
        }
        else
        {
            for(i=3;i<=n;i++)
            {
                if(prime(i) && prime(n-i))
                {
                    cout<<n<<":"<<'\n'<<i<<"+"<<n-i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
