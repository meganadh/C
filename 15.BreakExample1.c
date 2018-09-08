#include<stdio.h>
#include<conio.h>
/**************************************************
Author : Meganadha Reddy K
Purpose : print first number divisible by 117 after 1000
**************************************************/
void main()
{
   int i;
   for(i=1000;i<=1117;i++)
   {
      if(i%117==0)
      {
          printf("%d",i);
          break;
      }
   }
   getch();
}
