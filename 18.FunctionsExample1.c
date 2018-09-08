#include<stdio.h>
#include<conio.h>
int factorial(int n);
void printdata(int n);
void main()
{
    int n=4,n1=5,n2=6;
    printdata(n);
    printdata(n1);
    printdata(n2);
    getch();
}
int factorial(int a)
{
    int result=1, i;
    for(i=1;i<=a;i++)
        result=result*i;
    return result;
}
void printdata(int n)
{
    printf("Factorial of %d is %d",n,factorial(n));
}

