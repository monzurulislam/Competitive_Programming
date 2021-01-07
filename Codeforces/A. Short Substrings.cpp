#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int n=s.size();
        string temp="";
        for(i=1; i<n; i+=2)
        {
            temp = "0"+s[i];
        }
        cout<<temp<<endl;
    }
    return 0;
}
