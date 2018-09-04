#include<stdio.h>
#include<conio.h>
void main()
{
    int sum=0, i=1;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of numbers : %d",sum);
    getch();
}
