#include <iostream>

using namespace std;

main()
{
	int a;
	char e;
	do{
		cout<<"Enter Value to check: ";
		cin>>a;
		if(a%2 == 0)
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
		
	}
		
		while(e == 'Y' || 'y');
}
