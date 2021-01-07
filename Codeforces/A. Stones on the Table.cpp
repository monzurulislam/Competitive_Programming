#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,cnt=0;
    while(cin>>n>>s)
    {
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1])
                cnt++;
            else
                continue;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}
