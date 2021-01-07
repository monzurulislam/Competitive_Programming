#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    int n;cin>>n;

    int A[n],B[n];

    for(int i = 0; i<n; i++)cin>>A[i];

    for(int i = 0; i<n; i++)cin>>B[i];

    sort(A,A+n);

    sort(B,B+n);

    int flag = 0;

    for(int i = 0; i<n; i++){

        if(A[i]<B[i]){

            flag = 1;

            break;

        }

    }

    if(flag==0)cout<<"Yes"<<endl;

    else cout<<"No"<<endl;

    return 0;

}

