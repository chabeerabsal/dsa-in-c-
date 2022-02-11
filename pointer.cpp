#include<iostream>
using namespace std;
int main()
{
	int var=500;
	int *ptr;
    ptr=&var;
	cout<<*ptr<<endl;
	cout<<ptr<<endl;
	*ptr=800;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	return 0;
}