/*
Evaluate ages inputed for free schooling
*/

#include <../include/stdio.h>

main()
{
 int age;
 
 printf("Enter an age: \n");
 scanf("%d",&age);
 
 if (age > 18)
   printf("Needs to be assessed.\n");
 else if (age <= 18 && age >= 4)
   printf("Eligible.\n");
 else
   printf("Never eligible.\n");
 
 return 0;

}