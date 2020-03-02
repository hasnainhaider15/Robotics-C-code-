#include<iostream>

using namespace std;

main()
{
	int a, b, c, d;

	cout<<"Enter two numbers number: "<<" ";
	cin>>a>>b;
	
	if(a>b)
	{
		c = a;
		a = b;
		b = c;
	}

	//cout<<"Enter seconf number: "<<" ";
	//cin>>input2;
	
	cout<<"Prime numbers between"<<a<<" and " <<b<<" are: "<<endl;
	for(int i =1; i<=b; i++)
	{
		d=0;
		for(int j=1; j<=i; j++)
		{
			if(i%j == 0)
			d++;
			
		}
		if(d == 2)  //Ya to apny number sy divisible hoga ya to 1 sy divisible hoga
		cout<<i<<" ";
	}
	
}
