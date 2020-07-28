#include <stdio.h>

int main ()
{
     int year, remainder;
     printf("Enter a year: ");
     scanf("%d",&year);

     remainder=((year%4==0)&&((year%400==0)||(year%100!=0)));

     switch(remainder)
     {
     case 1:
         printf("%d is a Leap year.", year );
         break;

     case 0:
         printf("%d is not a Leap year.", year );
         break;

     default:
         printf("Invalid.");
         break;
     }

     return 0;

}
