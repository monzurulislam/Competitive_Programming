#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,i;
	cin>>n;
	cout<<n<<' ';
	for(i=0;;i++)
	{
		if(n==1)
			break;
		else if(n%2==0)
		{
			n = n/2;
			cout<<n<<' ';
		}
		else
		{
			n = n*3 + 1;
			cout<<n<<' ';
		}
	}
	cout<<endl;

	return 0;
}
