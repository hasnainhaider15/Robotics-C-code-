#include<iostream>
#include <conio.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
	
	int lm = 0, rm = 0;
    int c = 0, temp;
    cout<<"Speed: "<<"Left Motor: "<<lm<<" Right Motor: "<<rm<<endl;
    while(true)
    {
		
        switch((c=getch())) {
        case KEY_UP:
            cout << endl << "Up" << endl;//key up
            if(lm != rm)
            {
            	if(lm>rm)
            	{
            		lm = rm;	
				}
				else
				{
					rm = lm;
				}
			}
            lm = lm +5;
            rm = rm +5;
            cout<<"Speed: "<<"Left Motor: "<<lm<<" Right Motor: "<<rm;
            break;
        case KEY_DOWN:
            cout << endl << "Down" << endl;   // key down
             if(lm != rm)
            {
            	if(lm>rm)
            	{
            		lm = rm;	
				}
				else
				{
					rm = lm;
				}
			}
            lm = lm -5;
            rm = rm -5;
            cout<<"Speed: "<<"Left Motor: "<<lm<<" Right Motor: "<<rm;
            break;
        case KEY_LEFT:
            cout << endl << "Left" << endl;  // key left
            lm = lm -5;
            rm = rm ;
            cout<<"Speed: "<<"Left Motor: "<<lm<<" Right Motor: "<<rm;
            break;
        case KEY_RIGHT:
            cout << endl << "Right" << endl;  // key right
            lm = lm;
            rm = rm-5 ;
            cout<<"Speed: "<<"Left Motor: "<<lm<<" Right Motor: "<<rm;
            break;
        default:
            //cout << endl << "null" << endl;  // not arrow
            break;
        }

    }

    return 0;
}
