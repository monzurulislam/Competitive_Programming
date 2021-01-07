#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll,ll>>vec;
vector<ll>ara;

int main()
{
    ll n,w,t,m,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>w;
        for(i=0; i<n; i++)
        {
            cin>>x;
            vec.push_back({x,i});
        }
        sort(vec.begin(),vec.end());
        m=(w+1LL)/2LL;
        ll sum=0;
        for(i=n-1; i>=0; i--)
        {
            if(vec[i].first>w)
                continue;
            sum += vec[i].first;
            //cout<<vec[i].first<<" "<<vec[i].second<<endl;
            ara.push_back(vec[i].second);
            if(sum>=m)
                break;
        }
        if(sum>=m)
        {
            int st=ara.size();
            cout<<st<<endl;
            for(i=0; i<st; i++)
                cout<<(ara[i]+1)<<' ';
            cout<<endl;
        }
        else
            cout<<"-1"<<endl;
        ara.clear();
        vec.clear();
    }
    return 0;
}
