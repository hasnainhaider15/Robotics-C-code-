#include<iostream>

using namespace std;

class my_class
{
	public:
		int a,b,c;
		my_class()
		{
			cout<<"\n\n\tWellcome to Class.\n\n";
		}
};

main()
{
	my_class one;
	cin>>one.a>>one.b>>one.c;
	cout<<one.a<<endl<<one.b<<endl<<one.c<<endl;
}
