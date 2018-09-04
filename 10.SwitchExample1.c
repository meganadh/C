#include<stdio.h>
#include<conio.h>
void main()
{
    int input;
    printf("Enter any number:");
    scanf("%d",&input);
    switch(input)
    {
        case 1 : printf("ONE");
                 break;
        case 2 : printf("TWO");
                 break;
        case 3 : printf("THREE");
                 break;
        case 4 : printf("FOUR");
                 break;
        default : printf("INVALID");
                 break;
    }
    getch();
}
