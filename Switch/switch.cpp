#include<iostream>

using namespace std;

main()
{
	float a,b;
	char op;
	cout<<"Enter First Value:";
	cin>>a;
	cout<<"Enter Second Value:";
	cin>>b;
	cout<<"Enter arthematic operation you want to perform: ";
	cin>>op;
	
	switch(op)
	{
		case '+':
			cout<<"The sum ofnumbers is: "<<a+b<<endl;
			break;
		case '-':
			cout<<"The difference of numbers is: "<<a-b<<endl;
			break;
		case '*':
			cout<<"The product of numbers is: "<<a*b<<endl;
			break;
		case '/':
			cout<<"The remaining of numbers is: "<<a/b<<endl;
			break;
		default:
			cout<<"Entered Wrong expression:";
	}
}
