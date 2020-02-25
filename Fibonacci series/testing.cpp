#include<iostream>

using namespace std;

main()
{
	int n,i, b =0, c = 1, d = 0;
	cout<<"Enter Number of terms"<<" ";
	cin>>n;
	cout<<"Fibonacci Series is:"<<" ";
	
	for(i = 1; i<=n; i++)
	{
		if(i == 1)
		{
			cout<<b<<" ";
		}
		if(i==2)
		{
			cout<<c<<" ";
		}
		d= b+c;
		b=c;
		c=d;
		
		cout<<d<<" ";
		
	
	}
	return 0;
}
