#include<stdio.h>
#include<conio.h>
void main()
{
    int MAX=3;

    int marks[MAX];  //Declaring an array
    int sum=0,i;

    /* Reading Data from user */
    for(i=0;i<3;i++)
    {
        printf("Enter any number:");
        scanf("%d",&marks[i]);
    }

    /* Finding sum */
    for(i=0;i<3;i++)
        sum=sum+marks[i];

    printf("Sum=%d",sum);
    getch();
}
