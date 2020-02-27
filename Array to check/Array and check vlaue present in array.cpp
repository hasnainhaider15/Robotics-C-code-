#include<iostream>

using namespace std;

main()
{
	int i,n,value,arr[10];
	cout<<"Enter Array size: "<<" ";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cout<<"Enter Elents of array: "<<" ";
		cin>>arr[i];
	}
	cout<<"Enter Values to Search in array: "<<" ";
	cin>>value;
	for(i=0; i<n; i++)
	{
		if(arr[i] == n)
		{
			cout<<"Value found"<<" "<<value<<" "<<"at Position"<<" "<< i <<endl;
			break;
		}
		if(i ==n-1)
		{
			cout<<"Value not found";
		}
		
	}
	
}
