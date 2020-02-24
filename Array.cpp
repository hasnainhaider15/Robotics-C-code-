#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

main()
{
	int i,j,temp;
	int array[10],no;
	cout<<"Size of array: ";
	cin>>no;
	
	for(i = 0; i < no; i++)
	{
		cout<<"Enter any"<<no<<" num in array: ";
		cin>>array[i];
	}
	cout<<"Array is: ";
	for (i = 0; i < no; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<"Sorted Array:  ";
	for (i = 0; i < no; i++)
	{
			if(array[i]>array[i+1])
			{
				temp = array[i];
				array[i]= array[i+1];
				array[i+1]=array[temp];
				
			}

	}
	for(i=0; i<no; i++){
		cout<<array[i]<<" ";
	}
	//			if(array[i]==array[j])
//			{
			//cout<<"\n"<<array[j];
//				cout<<array[i]<<" ";
				
//			}	
}
