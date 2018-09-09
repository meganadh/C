#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
    int n=6,i;
    printf("Factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{
   if(n==0)
    return 1;
   else
    return n*factorial(n-1);
}
