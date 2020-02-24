#include<iostream>

using namespace std;

main()
{
	float a,b;
	char op,d;
	do{
	cout<<"Enter First Value:";
	cin>>a;
	cout<<"Enter Second Value:";
	cin>>b;
	cout<<"Enter arthematic operation you want to perform: ";
	cin>>op;
	
	if(op == '+')
	{
		cout<<"The sum ofnumbers is: "<<a+b<<endl;
		cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
		cin>>d;
	}		
	else if(op == '-')
	{
		cout<<"The difference of numbers is: "<<a-b<<endl;
		cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
		cin>>d;
	}
		
	else if(op == '*')
	{
		cout<<"The product of numbers is: "<<a*b<<endl;
		cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
		cin>>d;
	}
	else if (op == '/')
	{
		cout<<"The remaining of numbers is: "<<a/b<<endl;
		cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
		cin>>d;
	}
			
	else
	{
		cout<<"Entered Wrong expression:";
		cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
		cin>>d;
	}
			
	
}while(d == 'Y');
}
