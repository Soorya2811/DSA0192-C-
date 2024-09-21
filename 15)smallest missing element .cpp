#include <iostream>
using namespace std;
int main()
{
	int arr[]={0,1,2,3,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	int expected=0;
	int i=0;
	while(i<size)
	{
		if(arr[i]!=expected)
		{
			break;
		}
		expected++;
		i++;
	}
	cout<<"the missing smallest element is: "<<expected<<endl;
	return 0;
}