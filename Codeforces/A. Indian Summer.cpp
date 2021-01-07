#include<bits/stdc++.h>
using namespace std;

vector<pair<string,string>>vec;

int main()
{
    int t;
    cin>>t;
    string s,s1;
    for(int i=0; i<t; i++)
    {
        cin>>s>>s1;
        vec.push_back({s,s1});
    }
    sort(vec.begin(),vec.end());
    int n = unique(vec.begin(),vec.end()) - vec.begin();
    cout<<n<<endl;

    return 0;
}
