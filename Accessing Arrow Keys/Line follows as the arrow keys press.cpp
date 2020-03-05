#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 char ch,dh='\0',temp;
 int x=40,y=11;
 system("CLS");
 gotoxy(x,y);           /* beginning from the center */
 while(1)
 {
   temp=getch();        /* to store zero */
   ch=getch();          /* to store ASCII of extended key */
   switch(ch)
   {
     case 72:      /* up arrow */
      if(y>1)                /* checking the top corner */
       y--;                  /* moving up by 1 */
      gotoxy(x,y);
      cprintf("%c",179);    /* printing vertical graphical character */
      if(dh==77)             /* taking right to up turn */
      {
        y++;
        gotoxy(x,y);
        cprintf("%c",217);   /* printing right up corner */
      }
      if(dh==75)             /* taking left to up turn */
      {
        y++;
        gotoxy(x,y);
        cprintf("%c",192);   /* printing left up corner */
      }
      break;
     case 80:       /* down arrow */
      if(y<24)               /* checking the down corner */
        y++;                  /* moving down by 1 */
      gotoxy(x,y);
      cprintf("%c",179);    /* printing vertical graphical character */
      if(dh==77)             /* taking right to down turn */
      {
        y--;
        gotoxy(x,y);
        cprintf("%c",191);   /* printing right down character */
      }
      if(dh==75)             /* taking left to down turn */
      {
        y--;
        gotoxy(x,y);
        cprintf("%c",218);   /* printing left down corner */
      }
      break;
    case 75:       /* left arrow */
     if(x>1)               /* checking left corner */
       x--;                /* moving left by 1 */
     gotoxy(x,y);
     cprintf("%c",196);    /* printing horizontal graphical character */
     if(dh==80)            /* taking down to left turn */
     {
       x++;
       gotoxy(x,y);
       cprintf("%c",217);  /* printing down left corner */
    }
    if(dh==72)             /* taking up to left turn */
    {
       x++;
       gotoxy(x,y);
       cprintf("%c",191);  /* printing up left corner */
    }
    break;
  case 77:      /* right arrow */
    if(x<79)              /* checking right corner */
      x++;                 /* moving right by 1 */
    gotoxy(x,y);
    cprintf("%c",196);    /* printing horizontal graphical character */
    if(dh==80)            /* taking down to right turn */
    {
      x--;
      gotoxy(x,y);
      cprintf("%c",192);  /* printing down right corner */
    }
    if(dh==72)            /* taking up to right turn */
    {
      x--;
      gotoxy(x,y);
      cprintf("%c",218);  /* printing up right corner */
    }
    break;
  case 27:               /* checking for esc key */
   goto out;
 }
  dh=ch;                  /* making current character to previous character */
 }
out:
return 0;
}
void gotoxy(x,y)           //definition of gotoxy function//                                               
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
