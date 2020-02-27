#include<iostream>

using namespace std;

struct student
{
	string name;
	string fee_st;
	float gpa;
	int roll_no;
};

main()
{
	struct student s1,s2,s3;
	
	cout<<"Enter Your name:"<<" ";
	cin>>s1.name;
	
	cout<<"Enter your Fee status: "<<" ";
	cin>>s1.fee_st;
	
	cout<<"Enter your GPA: "<<" ";;
	cin>>s1.gpa;
	
	cout<<"Enter your roll number:"<<" ";
	cin>>s1.roll_no;
	

}



/*string namefun()
{
	student s1;
	string namefunc, arr[5];
	int i;
	for(i = 0; i<1; i++)
	{
		cout<<"Enter your name: "<<" ";
		cin>>s1.name;
		arr[i] = s1.name; 
		
		
	}
	for(i = 0; i<3; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}*/
