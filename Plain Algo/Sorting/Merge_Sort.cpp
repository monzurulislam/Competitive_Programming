#include<bits/stdc++.h>
using namespace std;

int ara[1000],cnt=0;

void Merge(int low,int mid,int up)
{
    //cnt++;
    int ans[up+10];
    int i,j,k;
    i = low;
    j = mid+1;
    k = 0;
    while(i<=mid && j<=up)
    {
        if(ara[i]<ara[j])
        {
            ans[k] = ara [i];
            i++,k++;
        }
        else
        {
            ans[k] = ara[j];
            j++,k++;
        }
    }
        while(i<=mid)
            ans[k]=ara[i],i++,k++;
        while(j<=up)
            ans[k]=ara[j],j++,k++;

        k = 0;
        for(i=low; i<=up; i++)
        {
            cnt++;
            ara[i]=ans[k],k++;
        }


}

void Merge_sort(int low,int up)
{
    if(low<up)
    {
        int mid = low+ (up - low) / 2;
        Merge_sort(low,mid);
        Merge_sort(mid+1,up);
        Merge(low,mid,up);
    }
}

int main()
{
    int n,i;
    while((scanf("%d",&n))==1)
    {
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        Merge_sort(0,n-1);
        for(i=0; i<n; i++)
            printf("%d ",ara[i]);
        printf("\n");
    cout<<cnt<<endl;

    }
    return 0;

}
