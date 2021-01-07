#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,j;
    vector<pair<int,int>>vec;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        vec.push_back(make_pair(x,i));

    }
    sort(vec.begin(),vec.end());

    for(i=0; i<n; i++)
        cout<<vec[i].second<<' ';
    cout<<endl;
    return 0;

}
