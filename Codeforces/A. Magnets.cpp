#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s,st;
    int cnt=1;
    cin>>s;
    st = s;
    for(int i=0; i<n-1; i++)
    {
        cin>>s;
        if(st!=s)
            cnt++;
        st = s;
    }
    cout<<cnt<<endl;

    return 0;
}
