#include<bits/stdc++.h>
using namespace std;

vector<long long>ans;
set<long long>st;
map<long long, long long>mp;
void func(long long n)
{
    ans.clear();
    mp.clear();
    st.clear();
    long long i,val,cnt,sz,mx;
    for(i=2; i*i<=n; i++)
    {
        while(n%i==0LL)
        {
            n/=i;
            st.insert(i);
            mp[i]++;
        }
    }
    if(n!=1LL)
    {
        st.insert(n);
        mp[n]++;
    }
    mx = 0;
    for(auto it:st)
    {
        if(mp[it]>mx)
        {
            mx = mp[it];
            val = it;
        }
    }
    for(i=0; i<mx; i++)
        ans.push_back(val);
    for(auto it:st)
    {
        if(it==val)
            continue;
        cnt = 0;
        sz = mp[it];
        for(i=0; i<sz; i++)
            ans[i]*=it;
    }
    reverse(ans.begin(),ans.end());
}
int main()
{
    long long i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        func(n);
        cout<<ans.size()<<endl;
        for(i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<' ';
        }
        cout<<endl;

    }
}
/*4
2
360
4999999937
4998207083
8*/
