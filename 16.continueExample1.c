#include<stdio.h>
#include<conio.h>
/**************************************************************
Author : Meganadha Reddy K
Purpose : To print all numbers divisible by 17 from 1000 to 1500
          Do not include numbers divisible by 5 in result;
****************************************************************/
void main()
{
  int i;
  for(i=1000;i<=1500;i++)
  {
      if(i%5==0)
      {
          continue;
      }
      if(i%17==0)
      {
          printf("%d\t",i);
      }
  }
      getch();
}
