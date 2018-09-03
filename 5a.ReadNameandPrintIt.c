#include<stdio.h>
#include<conio.h>
/*********************************************************
Author : Meganadha Reddy [meganadh@gmail.com]
Purpose: To read name from user and print it
**********************************************************/
void main()
{
    char name[30];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Hi %s, Welcome to C-Programming",name);
    getch();
}
