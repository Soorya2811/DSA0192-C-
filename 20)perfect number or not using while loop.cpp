#include <iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"enter the number:";
	cin>>n;
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
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