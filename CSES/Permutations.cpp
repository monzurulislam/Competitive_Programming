#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    if(n==2)
        cout<<"NO SOLUTION"<<endl;
    else if(n==3)
        cout<<"NO SOLUTION"<<endl;
    else if(n==4)
        cout<<"2 4 1 3"<<endl;
    else if(n==1)
        cout<<"1"<<endl;
    else
    {
        for(i = n-1; i > 0; i -= 2)
            cout<<i<<' ';

        for(i = n; i > 0; i -= 2)
            cout<<i<<' ';

    }
    return 0;
}
