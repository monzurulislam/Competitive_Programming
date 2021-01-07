#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,r;
    while(cin>>n>>r)
    {
        for(i=1;; i++)
        {
            if(((i*n)%10==0))
            {
                cout<<i<<endl;
                break;
            }
            else
            {
                if((i*n)%10==r)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}


