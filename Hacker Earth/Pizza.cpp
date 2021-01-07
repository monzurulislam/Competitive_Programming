
#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int t;cin>>t;

    vector<pair<int,string>>v;

    while(t--){

        string s;cin>>s;

        int n;cin>>n;

        v.push_back({n,s});

    }

    sort(v.rbegin(),v.rend());

    int max = v[0].first;

    string min = v[0].second;

    for(int i = 1; i<v.size(); i++){

        if(max==v[i].first){

            if(min>v[i].second){

                min = v[i].second;

            }

        }

    }

    cout<<min<<endl;

    return 0;

}


