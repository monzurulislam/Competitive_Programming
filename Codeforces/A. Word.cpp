#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    char s[600];

    scanf("%s",s);
    int n = strlen(s);
    int cap=0,sml=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            cap++;
        else
            sml++;
    }
    if(cap>sml)
    {
        for(i=0; i<n; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                continue;
            else
            {
                s[i]=s[i]-32;
            }
        }
    }
    else if(cap<=sml)
    {
        for(i=0; i<n; i++)
        {
            if(s[i]>='a' && s[i]<='z')
                continue;
            else
            {
                s[i]=s[i]+32;
            }
        }
    }
    cout<<s<<endl;


    return 0;
}
