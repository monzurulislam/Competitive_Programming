#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main()
{
    char c;
    string s;
    vector<string>vec;
    int ara[]={5,7,5};
    for(int i=0; i<3; i++)
    {
        cin>>c;
        getline(cin,s);
        s=c+s;
        vec.push_back(s);
    }
    for(int j=0; j<3; j++)
    {
        int cnt=0;
        for(auto i: vec[j])
        {
            if(isvowel(i))
                cnt++;
        }
        if ( cnt != ara[j] )
            return cout << "NO"<<endl, 0;
    }
    cout<<"YES"<<endl;
    return 0;
}
