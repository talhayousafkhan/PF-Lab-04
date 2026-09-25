#include<stdio.h>
int main()
{

int leapyear;

printf("Write year:  ");
scanf("%d",&leapyear);

if(leapyear%400==0)

printf("Leap year");


else if(leapyear%100==0)

printf("not a leap year");

else if(leapyear%4==0)

printf("Leap Year");

else

printf("not a leap year");




return 0;
}