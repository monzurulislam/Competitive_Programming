#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        int n = s.size(),flag=0;
        stack<char>st;
        for(i=0; i<n; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);

            else if(s[i]==')')
            {
                if(st.empty() || st.top()!='(')
                {
                    flag=1;
                    break;
                }
                st.pop();
            }
            else if(s[i]=='}')
            {
                if(st.empty() || st.top()!='{')
                {
                    flag=1;
                    break;
                }
                st.pop();
            }
            else if(s[i]==']')
            {
                if(st.empty() || st.top()!='[')
                {
                    flag=1;
                    break;
                }
                st.pop();
            }
        }

        if(flag==0 && st.empty())
            cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}
