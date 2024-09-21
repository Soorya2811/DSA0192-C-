#include <iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter the number:";
	cin>>n;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum == n)
	{
		cout<<"\nthe given number "<<n<<" is a perfect number";
	}
	else
	{
		cout<<"\nthe given number "<<n<<" is not a perfect number";
	}
	return 0;
}