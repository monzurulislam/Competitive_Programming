#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,s1;
    map<string,int>mp;
    while(n--)
    {
        cin>>s1;
        getline(cin,s);
        mp[s1]++;
    }
    for(auto mp:mp)
    {
        cout<<mp.first<<' '<<mp.second<<endl;
    }

    return 0;
}
