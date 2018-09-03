#include<stdio.h>
#include<conio.h>
/********************************************************
Author : Meganadha Reddy K
Purpose : To read distance (unsigned int) and print it.
*********************************************************/
void main()
{
    unsigned int distance;
    printf("Enter the distance between two planets:");
    scanf("%u",&distance);
    printf("You have entered : %u",distance);
    getch();
}
