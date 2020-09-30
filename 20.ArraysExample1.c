#include<stdio.h>
#include<conio.h>
#define MAX 5
void main()
{
   

    int marks[MAX];  //Declaring an array
    int sum=0,i;
    printf("\nEnter number of elements in the array\n");
    scanf("%d",&n);
    /* Reading Data from user */
    printf("\nEnter elements of array\n");
    for(i=0;i<n;i++)
    {
        printf("Enter any number:");
        scanf("%d",&marks[i]);
    }

    /* Finding sum */
    for(i=0;i<n;i++)
        sum=sum+marks[i];

    printf("Sum=%d",sum);//printing sum
    getch();
}
