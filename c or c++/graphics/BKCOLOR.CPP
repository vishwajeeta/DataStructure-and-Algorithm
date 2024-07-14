#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
char a[10];
clrscr();

gotoxy (5,5);
//setting the position(row and column) of text
textbackground(YELLOW);
//setting the background color of text as yellow
cputs("BCA - Course Programming");
getch();
restorecrtmode ();
}