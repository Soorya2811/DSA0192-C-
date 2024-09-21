#include <iostream>
using namespace std;
int main()
{
	int i,n,cuberoot=0;
	cout<<"enter the number:";
	cin>>n;
	while(cuberoot*cuberoot*cuberoot <= n)
	{
		if(cuberoot*cuberoot*cuberoot == n)
		{
			break;
		}
		cuberoot++;
	}
	if(cuberoot*cuberoot*cuberoot==n)
	{
		cout<<"the cube root of the number "<< n <<" is:"<< cuberoot<<endl;
	}
	else
	{
		cout<<"the cube root of the number"<<n<<"dont have proper cube root value"<<endl;
	}
}