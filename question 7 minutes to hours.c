#include<stdio.h>
void main()
{
int minutes,hours,rem_minutes;
minutes=140;
hours=minutes/60;
rem_minutes=minutes%60;
printf("in %d the hours is %d and remaning minutes is %d",minutes,hours,rem_minutes);
}