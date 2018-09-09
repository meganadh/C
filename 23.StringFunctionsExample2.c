#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char fname[30]="Meganadha",lname[30]="Reddy";
    printf("Length of fname=%d\n\n",strlen(fname));
    printf("Lower case name : %s\n\n",strlwr(fname));
    printf("Upper case name : %s\n\n",strupr(fname));
    printf("Reverse of string : %s\n\n",strrev(fname));
    strrev(fname);
    printf("Full name %s\n\n",strcat(fname,lname));
    printf("\n\n\n%d\n\n\n",strcmp("bbc","zbc"));
}
