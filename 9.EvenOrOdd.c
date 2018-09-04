#include<stdio.h>
#include<conio.h>
void main()
{
    int input;
    printf("Enter any number:");
    scanf("%d",&input);
    (input%2==0)?printf("Even Number"):printf("Odd Number");
    getch();
}
