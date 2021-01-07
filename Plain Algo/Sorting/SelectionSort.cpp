#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int ara[],int n)
{
    int i,min,j;
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(ara[min] > ara[j])
                min = j;
        }
        swap(ara[i],ara[min]);
    }
}

int main()
{
    int i,n,ara[1000],j;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>ara[i];
    Selection_Sort(ara,n);
    for(i=0; i<n; i++)
        cout<<ara[i]<<' ';
    cout<<endl;

    return 0;
}
