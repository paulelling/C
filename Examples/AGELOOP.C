/*
  calculate average age of ten people
*/

#include <../include/stdio.h>

void main()
{
 int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
 int total;
 

 printf("\nEnter ten ages, separated by spaces: \n");
 scanf("%d",&age1);
 scanf("%d",&age2);
 scanf("%d",&age3);
 scanf("%d",&age4);
 scanf("%d",&age5);
 scanf("%d",&age6);
 scanf("%d",&age7);
 scanf("%d",&age8);
 scanf("%d",&age9);
 scanf("%d",&age10);
 
 total = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;
 
 
 printf("Average age is: %d",total/10);

 
}