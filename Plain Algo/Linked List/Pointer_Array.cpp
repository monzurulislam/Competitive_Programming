#include<bits/stdc++.h>
using namespace std;

void swap(int ara[])
{
    int *ptr = &ara[0];
    int sum = 0;
    for(int i=0; i<4; i++)
    {
       sum+= *ptr;
        ptr++;
    }
    cout<<sum<<endl;
}

int main()
{
    int ara[4]={1,2,3,5},i;
    swap(ara);

}

