#include<stdio.h>
#include<conio.h>
/************************************************
Author : Meganadha Reddy K
Purpose : Read string from user and print size and reverse of it
*********************************************************/
void main()
{
    char name[30];
    int i, length=0;
    printf("Enter your name:");
    scanf("%s",&name);

    /* Logic for finding length of entered string */
    for(i=0;name[i]!='\0';i++)
        length=length+1;
    printf("Length of the entered string is : %d\n\n",length);

    /* Logic to print reverse of the string */
    for(i=length-1;i>=0;i--)
        printf("%c",name[i]);
}
