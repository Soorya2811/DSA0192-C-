#include <iostream>
using namespace std;
int main()
{
	int n,bitn,modn;
	cout<<"enter th enumber:";
	cin>>n;
	cout<<"\nenter teh bit you wish:";
	cin>>bitn;
	modn=n |(1 << bitn);
	if(modn != n)
	{
		cout<<"\nbit set successfully";
	}
	else
	{
		cout<<"\nbit set was already set";
	}
	cout<<"\nanswer = "<<modn;
	return 0;
}