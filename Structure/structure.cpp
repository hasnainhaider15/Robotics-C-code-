#include<iostream>

using namespace std;

struct student
{
	string name[10];
	char fee_st;
	float gpa;
	int roll_no;
};

main()
{
	struct student s1,s2,s3;
	s1.name[10] = "Hasnain Haider";
	s1.fee_st = 'y';
	s1.gpa = 3.5;
	s1.roll_no = 25;
	cout<<s1.name;
}
