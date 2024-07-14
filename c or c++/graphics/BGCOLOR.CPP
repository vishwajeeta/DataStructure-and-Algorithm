#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd,gm;
//here 'gd' is graphic drive & 'gm' is graphic mode

gd=DETECT;
//detect is used to detect the moniter type
//graphic mode is set automatically

clrscr();
 initgraph ( &gd, &gm, "c:\TURBOC3\BGI" );
 //Drive path is different for different compiler and system

 setbkcolor ( RED );
 // setting background color

 getch();
 restorecrtmode();
}