#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5, b=10, temp;
    printf("\nBefore swap a=%d, b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap a=%d, b=%d",a,b);
    getch();
}
