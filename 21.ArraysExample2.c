#include<stdio.h>
#include<conio.h>
void main()
{
    char marks[3];
    marks[0]=65;
    marks[1]=75;
    marks[2]=85;
    printf("\n\nvalue of marks[0]=%d and address=%u",marks[0],&marks[0]);
    printf("\n\nvalue of marks[1]=%d and address=%u",marks[1],&marks[1]);
    printf("\n\nvalue of marks[2]=%d and address=%u",marks[2],&marks[2]);
    getch();
}
