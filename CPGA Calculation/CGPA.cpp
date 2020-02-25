#include<iostream>

using namespace std;

main()
{
	//float sgpa();
	//sgpa();
	float cgpa();
	cgpa();
}

float sgpa()
{
	float sp1,sp2,sp3,sp4,sp5,sc1,sc2,sc3,sc4,sc5,a;
	cout<<"Enter Points score in Subject 1: "<<" ";
	cin>>sp1;
	cout<<"Enter Credit hours of Subject 1: "<<" ";
	cin>>sc1;
	cout<<endl;
	
	cout<<"Enter Points score in Subject 2: "<<" ";
	cin>>sp2;
	cout<<"Enter Credit hours of Subject 2: "<<" ";
	cin>>sc2;
	cout<<endl;
	
	cout<<"Enter Points score in Subject 3: "<<" ";
	cin>>sp3;
	cout<<"Enter Credit hours of Subject 3: "<<" ";
	cin>>sc3;
	cout<<endl;
	
	cout<<"Enter Points score in Subject 4: "<<" ";
	cin>>sp4;
	cout<<"Enter Credit hours of Subject 4: "<<" ";
	cin>>sc4;
	cout<<endl;
	
	cout<<"Enter Points score in Subject 5: "<<" ";
	cin>>sp5;
	cout<<"Enter Credit hours of Subject 5: "<<" ";
	cin>>sc5;
	
	cout<<endl;
	a = ((sp1*sc1)+(sp2*sc2)+(sp3*sc3)+(sp4*sc4)+(sp5*sc5))/(sc1+sc2+sc3+sc4+sc5);
	cout<<"GPA of this Semester is: "<<" "<<a;
	
	return 0;
}

float cgpa()
{
	int a, i,j,h;
	float gpa,cp, c[10],d[10],e[10],sum=0,pro=0;
	cout<<"Enter Number of Semesters you want to Calculate their CGPA: "<<" ";
	cin>>a;
	
	for(i = 1; i <= a; i++)
	{
		cout<<"Enter GPA of Semester: "<<" ";
		cin>>gpa;
		cout<<"Enter Total credit hours of that semester: "<<" ";
		cin>>cp;
		e[i] = gpa*cp;
		
		//c[i]=cp+cp;
		d[i]=cp;
		
		
	}
	for(j = 1; j<=a;j++)
	{
		//cout<<e[j]<<" ";
		//cout<<c[j]<<endl;
		pro = pro+e[j];
		sum = sum +d[j];
			
	}
	cout<<"total point Scored "<<" "<<pro<<endl;
	cout<<"Total credits hours "<<" "<<sum<<endl;
	cout<<endl;
	cout<<"Total CGPA: "<<" "<< pro/sum;
	
	
}
