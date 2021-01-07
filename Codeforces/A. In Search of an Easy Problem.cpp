#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag=0;
    char c;
    cin>>n;
    getchar();
    for(int i=0; i<n; i++)
    {
        scanf("%c",&c);
        getchar();
        if(c=='1')
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
    return 0;
}
