#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1000];
bool visited[1000];
int level[1000];

void BFS(int n)
{
    queue<int>Q;
    visited[n]=1;
    level[n]=0;
    Q.push(n);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
    }
}

int main()
{
    int i,j,n,m,a,b;
    cin>>a>>b;
    for(i=0; i<b; i++)
    {
        cin>>n>>m;
        adj[n].push_back(m);
        adj[m].push_back(n);
    }
    cin>>j;
    BFS(j);

    for ( int i = 1 ; i <= a; i++ )
        cout<<"Shortest path of node "<< i <<" is: "<< level [ i ] << "\n";

    return 0;
}
