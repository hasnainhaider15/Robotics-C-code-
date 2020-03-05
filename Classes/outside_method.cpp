#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class student
{
	private:
		int gpa,dob;
	public:
		string name;
		get_name();
		
		
};
student::get_name()
		{
			name = "Hasnain";
			cout<<name<<endl;
			cout<<"Enter dob of Student";
			cin>>dob;
			cout<<"Student's dob: "<<dob<<endl;
		}

main()
{
	int a;
	student one;
	one.get_name();
}
