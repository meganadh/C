#include<stdio.h>
#include<conio.h>
#include<string.h>
/************************************************
Author : Meganadha Reddy K
Purpose : Read string from user and print size and reverse of it
*********************************************************/
void main()
{
    char name[30],temp;
    int i, length=0;
    printf("Enter your name:");
    scanf("%s",&name);

    /* Logic for finding length of entered string */
    for(i=0;name[i]!='\0';i++)
        length=length+1;
    printf("Length of the entered string is : %d\n\n",length);

    /* Logic to print reverse of the string */
    int n=strlen(name);
    int end=n-1;
 	for(i=0;i<n/2;i++){
 		 temp=name[i];
		 name[i]=name[end];
		 name[end]=temp;
		 end--;
	 }
    name[i]='\0';
}
