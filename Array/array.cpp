#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

main()
{
	int i,j,n,temp,a[10];
	cout<<"Enter length of array: ";
	cin>>n;
	cout<<"Enter Elents of array:"<<endl;
	for(i=0; i<n; i++)
	{
		
		cin>>a[i];
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Accending order array:"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<"\n";
	}
	
	cout<<"Dublicate numbers are: ";
	for(i=0; i<n;i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j] && i != j)
			{
				cout<<a[i]<<" ";
				
			
			
			}
		}
	}
	//cout<<"incremented in numbers: ";
	for(i=0; i<n;i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j] && i != j)
			{
				for(int h = j+1; h<n; h++)
				{
					
						a[j] += 1;
				    	//cout<<a[i]<<" ";
						a[j++];
						//cout<<a[j];
				
					
				}
			}
			
		}
	}
	cout<<endl;
	cout<<"Incremented array"<<endl;
	for(i=0; i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

