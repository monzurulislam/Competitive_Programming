#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1000];
char color[1000];


bool bfs()
{
    int i;
    for(i=0; i<1000; i++)
        color[i]='n';
    queue<int>q;
    q.push(0);
    color[0]='w';
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        int sz = adj[u].size();
        for(i=0; i<sz; i++)
        {
            int v = adj[u][i];
            if(color[v]=='n')
            {
                q.push(v);
                if(color[u]=='b')
                    color[v]='w';
                else
                    color[v]='b';
            }
            else if(color[u]==color[v])
                return false;
        }
    }
    return true;
}

int main()
{
    int n,l,a,b,i;
    while(cin>>n and n!=0)
    {
        cin>>l;
        for(i=0; i<l; i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        if(bfs()==false)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
        for (int i=0;i<n;i++) adj[i].clear();
    }
    return 0;
}
