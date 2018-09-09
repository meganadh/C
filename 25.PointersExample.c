#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5;
    int *p;
    printf("value : %d\n",a);
    printf("Address : %u\n",&a);
    p=&a;
    printf("Value at address of a %d\n",*p);
    /*  &a, p  */    /* a, *p, *(&a) */

}
