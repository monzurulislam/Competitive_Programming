#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int ara[],int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        temp = ara[i];
        j = i-1;
        while(j>=0 && ara[j] > temp)
        {
            ara[j+1] = ara[j];
            j--;
        }
        ara[j+1] = temp;
    }
}

int main()
{
    int n,i,ara[1000];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    Insertion_Sort(ara,n);
    for(i=0; i<n; i++)
        cout<<ara[i]<<' ';
    cout<<endl;

    return 0;

}
