#include<stdio.h>
void main()
{
 int a,b,temp;
 a = 10;
 b = 20;
 printf("before swapping value %d and %d",a,b);
 temp=a;
 a = b;
 b = temp;
 printf("after swapping value %d and %d",a,temp);
}