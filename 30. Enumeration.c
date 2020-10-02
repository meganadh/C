#include<stdio.h>
#include<conio.h>
/*************************************************
Use     : Enumeration or enum is user defined data type in c.
Purpose : To show that two enum can have same value and if we do not
          explicitly assign values to enum names, 
          the compiler by default assigns values starting from 0.
************************************************************/
enum Day {sunday, monday, tuesday, wednesday, thursday, friday, saturday, 
          working = 1, failed = 0, freezed = 0, };

void main(){
  	enum Day d = thursday; 
    printf("The day number stored in d is %d \n", d); 
    printf("%d, %d, %d", working, failed, freezed);
}
