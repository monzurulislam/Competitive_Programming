#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int cnt=1,mx=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]== s[i+1])
        {
            cnt++;
            mx = max(mx,cnt);
        }
        else
            cnt = 1;

    }
    if(mx==0)
        cout<<mx+1<<endl;
    else
        cout<<mx<<endl;

    return 0;

}
