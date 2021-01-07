#include<bits/stdc++.h>
using namespace std;

set<char>st;

int main()
{
    int n,sum=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
         st.insert(s[i]);
    }
    if(st.size()>=26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        return 0;
}


