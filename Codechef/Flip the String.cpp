#include <bits/stdc++.h>
using namespace std;

int func(string str1, string str2)
{
    int i,j;
    int n = str1.size();
    int start,last,cnt=0;
    for(i=0; i<n; i+=2)
    {
        if(str1[i]==str2[i])
            continue;
        if(str1[i]!=str2[i])
        {
            for(j=i; j<n; j+=2)
            {
                if(str1[j]!=str2[j])
                {
                    str1[j]=str2[j];
                        continue;
                }
                else
                    break;
            }
            cnt++;
            i = j - 2;
        }
    }
    for(i=1; i<n; i+=2)
    {
        if(str1[i]==str2[i])
            continue;
        if(str1[i]!=str2[i])
        {
            for(j=i; j<n; j+=2)
            {
                if(str1[j]!=str2[j])
                {
                    str1[j]=str2[j];
                        continue;
                }
                else
                    break;
            }
            cnt++;
            i = j - 2;
        }
    }
    return cnt;
}

/*3
100001
110111
1010
1010
000
111*/

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while(t--)
    {
        cin>>s1>>s2;
        cout<<func(s1,s2)<<endl;
    }

    return 0;
}
