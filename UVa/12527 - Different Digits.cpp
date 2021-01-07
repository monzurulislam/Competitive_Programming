#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,cnt;
    while(cin>>a>>b)
    {
        cnt = 0;
        for(int i = a; i <= b; i++)
        {
            n = i;
            bool visited[10] = {false};
            while(n!=0)
            {
                if(visited[n%10])
                    break;

                visited[n%10] = true;
                n = n/10;
            }
            if(n==0)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
