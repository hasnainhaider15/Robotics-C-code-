#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class student
{
	private:
		int dob;
	public:
		string name;
		int get_name(int gpa);
		
		
};
int student::get_name(int gpa)
		{
			name = "Hasnain";
			cout<<name<<endl;
			cout<<"Enter dob of Student";
			cin>>dob;
			cout<<"Student's dob: "<<dob<<endl;
			return gpa;
		}

main()
{
	int a;
	student one;
	//one.get_name();
	cout<<one.get_name(3);
	return 0;
}
