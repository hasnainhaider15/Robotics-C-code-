#include <iostream>
using namespace std;
void main()
{
	int x, square, cube;
	cout << " enter a number" << endl;
	cin >> x;

	if (x % 2 == 0)
	{
		square = (x)*(x);
		cout << "the square of the number is " << square << endl;
		
		cube = (x)*(x)*(x);
		cout << " the cube of the number is " << cube << endl;

	}
	else
	{
		cout << "the number is odd" << endl;
	}
	system("pause");
}
 

____________________________________________________________________________________________


#include <iostream>
using namespace std;
void main()
{
	int pay1 ,  pay2 , hours, rate;

	cout << "enter number of hours " << endl;
	cin >> hours;

	cout << "enter hourly rate" << endl;
	cin >> rate;

	if (hours < 40)
	{
		pay1 = (rate)*(hours);
		cout <<" your pay is " << pay1 << endl;
	}
	else if (hours > 40)
	{
		cout << " enter your pay" << endl;
		cin >> pay1;

		pay2 = (pay1)+((hours - 40)*(1.5)*(rate));
		cout << " your pay is" << pay2 << endl;
	}
	system("pause");
}
__________________________________________________________________________________________________________