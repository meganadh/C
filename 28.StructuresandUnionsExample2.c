#include<stdio.h>
#include<conio.h>
union Data
{
    int id;
    char gender;
    char country[10];
};
void main()
{
    union Data d;
    printf("Size : %d",sizeof(d));
    getch();
}
