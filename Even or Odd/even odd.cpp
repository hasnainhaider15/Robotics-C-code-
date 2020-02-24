#include <iostream>
#include<limits>

using namespace std;

main()
{
	int a;
	char e, b;
	do{
		cout<<"Enter Value to check: ";
		cin>>a;
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout<<"You have entered wrong input"<<endl;
			//cin>>a;
			cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
			cin>>e;
			
		}
		else if(a%2 ==0)
		{
		
			cout<<"Value is Even"<<endl;
			cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
			cin>>e;
		}
		else
		{
			cout<<"Value is odd"<<endl;
			cout<<"Enter 'Y' if 'y' you want to continue and any other key to exit:";
			cin>>e;
		}
	}while(e == 'Y');
}
