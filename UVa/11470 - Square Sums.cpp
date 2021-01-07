#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,j,n,sum,ara[20][20],cas=1;
   while(cin>>n)
   {
       if(n==0)
        break;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>ara[i][j];
           }
       }
        printf("Case %d:",cas);
       for(i=0;i<n/2;i++)
       {
           int sum = 0;
           for(j=i;j<n-i-1;j++)
           {
               sum += ara[i][j] + ara[j][n-i-1] + ara[n-1-i][n-1-j] + ara[n-1-j][i];
           }
           cout<<' '<<sum;
       }

       if(n%2)
        cout<<' '<<ara[n/2][n/2];
        cout<<endl;
        cas++;
   }
    return 0;
}
