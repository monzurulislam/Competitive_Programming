#include <bits/stdc++.h>
using namespace std;

//int printRepeating(int arr[], int n)
//{
//    int cnt=0;
//    unordered_map<int, int> mp;
//    for (int i = 0; i < n; i++)
//        mp[arr[i]]++;
//
//    for (int i = 0; i < n; i++) {
//        if (mp[arr[i]] > 1) {
//            cnt++;
//            mp[arr[i]] = 0;
//        }
//    }
//    return cnt;
//}

int main()
{
    int n,i,t,x,ara[100090];
    set<int>arr;
    int cnt=0;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        //arr.insert(ara[0]);
        for(i=n-1; i>=0; i--)
        {
            if(arr.find(ara[i]+1)==arr.end())
            {
                ara[i]++;
                arr.insert(ara[i]);
            }
            else
                arr.insert(ara[i]);
        }


        cout<<arr.size()<<endl;

        arr.clear();
    }
    return 0;
}
