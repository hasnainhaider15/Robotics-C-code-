#include <stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;
int main()
{
int ch,temp;
cout<<"Enter any character:";
temp=getch();                           /* storing 0 */
ch=getch();                                /* storing ASCII value */
cout<<"\nThe ASCII value of given character is: "<<ch;
return 0;
}
