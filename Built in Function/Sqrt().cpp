#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,left=0,right,mid;
    while(cin>>n)
    {
        left=1;
        right = n;
        if(n<2)
        {
            cout<<n<<endl;
            continue;
        }

        while(left < right)
        {
            mid = left + ((right - left) / 2);

            if(mid * mid == n)
            {
                left = mid + 1;
                break;
            }

            else if(mid * mid > n)
                right = mid;

            else if(mid * mid < n)
                left = mid + 1;
        }
        cout<<left - 1<<endl;
    }

    return 0;
}
