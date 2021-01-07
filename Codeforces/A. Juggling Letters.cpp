#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    string str;
    while(t--)
    {
        int ara[50]={0},i,j,flag=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>str;
            for(j=0;j<str.size();j++)
            {
                ara[str[j]-'a']++;
            }
        }
        for(i=0;i<26;i++)
        {
            if(ara[i] % n != 0)
                flag = 1;
        }
        if(flag==1)
           cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}
