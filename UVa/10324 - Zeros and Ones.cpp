#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i,j,n,cas=1;
    while(cin>>str)
    {
        if(str.empty())
            break;
        cin>>n;
        printf("Case %d:\n",cas);
        while(n--)
        {
            cin>>i>>j;

            //cout<<str[min(i,j)]<<' '<<str[max(i,j)]<<endl;
            if(str[min(i,j)] == str[max(i,j)])
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }
        cas++;
    }
    return 0;
}
