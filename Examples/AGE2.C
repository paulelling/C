/*
  calculate average age of ten people
*/

#include <../include/stdio.h>

void main()
{
 int age[10];
 int total, i;
 int youngest, oldest;
 
 total = 0;
 youngest = 0;
 oldest = 0;
 printf("Enter ten ages:\n",i);
 for(i = 0; i < 10; i++)
 {
  scanf("%d",&age[i]);
  youngest = age[0];
  if (age[i] < youngest)
  	youngest = age[i];
  if (age[i] > oldest)
  	oldest = age[i];  	
  total = total + age[i];
 }
 
 printf("Youngest = %d\n",youngest);
 printf("Oldest = %d\n",oldest);
 printf("Average = %d\n",total/10);
 

}