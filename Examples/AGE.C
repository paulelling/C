/*
  calculate average age of ten people
*/

#include <../include/stdio.h>

void main()
{
 int age[10];
 int total, i;
 
 total = 0;
 printf("Enter ten ages:\n",i);
 for(i = 0; i < 10; i++)
 {
  scanf("%d",&age[i]);
  total = total + age[i];
 }
 
 printf("Average = %d",total/10);
 

}