#include <iostream>
using namespace std;
int main()
{
	int n,sqr=0,i;
	cout<<"enter a number:";
	cin>>n;
	for(i=0;i<=n/2;++i)
	{
		if(i*i==n)
		{
			sqr=i;
			break;
		}
	}
	if (sqr > 0) {
        cout << "The square root of " << n << " is " << sqr << endl;
    } else {
        cout << "The number " << n << " does not have an integer square root." << endl;
    }
	return 0;
}