#include<stdio.h>
#include<conio.h>
/**************************************************
Author : Meganadha Reddy K
Purpose : To read a number from user and check even /odd
****************************************************/
void main()
{
    //Variable Declaration
    int input;

    //Read values from user
    printf("Enter any number:");
    scanf("%d",&input);

    //Logic
    if(input==0)
        printf("The number is Zero",input);
    else if(input%2==0)
        printf("%d is Even Number",input);
    else
        printf("%d is Odd Number",input);
    getch();

}
