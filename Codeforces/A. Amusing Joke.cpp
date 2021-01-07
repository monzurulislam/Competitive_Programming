#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,st,str;
    while(cin>>s>>st>>str)
    {
        string result = s+st;
        sort(str.begin(),str.end());
        sort(result.begin(),result.end());

        if(result==str)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
