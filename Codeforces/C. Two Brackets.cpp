#include<bits/stdc++.h>
using namespace std;

void count_RBS(string s)
{
    int ans=0;
    deque<char>dq,deq;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
            dq.push_front(s[i]);
        else if(s[i]=='[')
            deq.push_front(s[i]);
        else if(s[i]==')')
        {
            if(!dq.empty())
            {
                ans++;
                dq.pop_front();
            }
        }
        else
        {
            if(!deq.empty())
            {
                ans++;
                deq.pop_front();
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int t,i,j;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        count_RBS(s);
    }
}
