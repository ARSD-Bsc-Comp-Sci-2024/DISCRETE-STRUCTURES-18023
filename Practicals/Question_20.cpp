#include <iostream>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter m value of m-ary tree : ";
	cin>>m;
	cout<<"Enter the numberof vertices in the tree : ";
	cin>>n;
	cout<<"The number of leaves in the m-ary tree : "<<((m-1)*n+1)/m<<endl;
  
	return 0;
}
