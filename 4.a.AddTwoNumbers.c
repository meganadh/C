#include<stdio.h>
#include<conio.h>
/*****************************************************
* Author : Meganadha Reddy K
* Purpose : To read two numbers from user and print sum and average of two numbers
******************************************************/
void main()
{
    int fn, sn, sum;
    float average;

    //Read values from user
    printf("Enter first number:");
    scanf("%d",&fn);
    printf("Enter second number:");
    scanf("%d",&sn);

    //Logic - Sum and average
    sum=fn+sn;
    average=sum/2.0;

    printf("Sum = %d, Average=%f",sum,average);
    getch();
}
