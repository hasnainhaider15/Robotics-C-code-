#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class student
{
	private:
		char c_title;
		int c_marks;
	public:
		get_data()
		{
			cout<<"Enter Course title: ";
			cin>>c_title;
			cout<<"Enter Course Marks: ";
			cin>>c_marks; 
		}		
};


main()
{
	student s1,s2,s3;
	cout<<"Enter Data for Student 1. \n";
	s1.get_data();
	cout<<endl;
	cout<<"Enter Data for Student 2. \n";
	s2.get_data();
	cout<<endl;
	cout<<"Enter Data for Student3. \n";
	s3.get_data();
};
