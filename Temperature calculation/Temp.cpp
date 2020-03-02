#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{
	int choice;
	cout<<endl<<"---------------------------Temp Calculator--------------------------------\n\n\n";
	cout<<"   Chose your option: "<<endl<<endl;
	cout<<"     1. Celsius to Farhenheit"<<endl;
	cout<<"     2. Farhenheit to Celsius"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			system("CLS");
			cout<<"\n------------------------Celsius to Farhenheit-----------------------------\n\n";
			float cel_far();
			cel_far();
			break;
		
		case 2:
			system("CLS");
			cout<<"\n\n------------------------Farhenheit to Celsius-----------------------------\n\n";
			float far_cel();
			far_cel();
			break;
	}
		
}
float cel_far()
{
	float calvalue, far;
	cout<<"Enter degree in Celsius to convert it into Farhenheit: "<<" ";
	cin>>calvalue;
	far = (calvalue*9/5) +32;
	cout<<"Result is: "<<" "<<far;
	
}
float far_cel()
{
	float farvalue, cal;
	cout<<"Enter degree in Farhenheit to convert it into Celsius: "<<" ";
	cin>>farvalue;
	cal = ((farvalue-32) * 5/9);
	cout<<"Result is: "<<" "<<cal;
	
}
