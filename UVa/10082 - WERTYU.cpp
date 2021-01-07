#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,j;
    string s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int m = s.size();
    string str;


    while(getline(cin,str))
    {

        int n = str.size();
        for(i=0; i<n; i++)
        {
            if(str[i]== ' ')
                cout<<' ';
            else
            {
                for(j=0; j<m; j++)
                {
                    if(str[i]==s[j])
                    {
                        cout<<s[j-1];
                        break;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
