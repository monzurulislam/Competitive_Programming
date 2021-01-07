#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=0,tnt=0,mx=-1,mn=-1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            cnt++;
            mx=max(mx,cnt);
        }
        else
            cnt=0;

        if(s[i]=='1')
        {
            tnt++;
            mn=max(mn,tnt);
        }
        else
            tnt=0;
    }
    if(mx>=7 || mn>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

