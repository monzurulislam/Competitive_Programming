#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    char s[60];
    while(cin>>n>>k)
    {
        scanf("%s",s);
        for(int j=0; j<k; j++)
        {
            for(i=1; i<n; i++)
            {
                if(s[i-1]=='B' && s[i]=='G')
                {
                    swap(s[i-1],s[i]);
                    i++;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
