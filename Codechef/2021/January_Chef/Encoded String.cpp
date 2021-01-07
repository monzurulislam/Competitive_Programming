#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    string s = "abcdefghijklmnop";
    string str,temp="";
    cin>>t;
    while(t--)
    {
        int mid=0,left=0,right=16;
        cin>>n>>str;
        for(i=0; i<str.size(); i+=4)
        {
            //mid = left + (right-left)/2;
            for(j=i; j<i+4; j++)
            {
                mid = left + (right-left)/2;
                if(str[j]=='1')
                {
                    right = mid-1;
                }
                else if(str[j]=='0')
                {
                    left = mid+1;
                }
            }
            temp+=s[left];

        }
        cout<<temp<<endl;
    }
    return 0;
}
