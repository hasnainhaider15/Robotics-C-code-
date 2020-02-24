#include<iostream>

using namespace std;

main()
{
	int a,b,x;
	cin>>a>>b;
	int add(int,int); // Function declaration
	x = add(a,b); //Fumction Calling
	cout<<x<<endl;
	cin>>a>>b;
	x = add(a,b);
	cout<<x;
}
// Starting add function

int add(int c, int d)
{
	int e;
	e = c + d;
	return(e);
}
