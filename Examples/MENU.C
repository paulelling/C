/*
display a menu
allow the user to choose, exiting on 5
*/

#include <../include/stdio.h>


main()
{
 int num;
 
 printf("Enter one of the following numbers to get its action:\n");
 printf("1 to add.\n");
 printf("2 to view.\n");
 printf("3 to change.\n");
 printf("4 to delete.\n");
 printf("5 to exit.\n");
 scanf("%d",&num);
 
 while (num != 5)
 {
 if (num == 1)
   printf("You chose to add.\n");
 else if (num == 2)
   printf("You chose to view.\n");
 else if (num == 3)
   printf("You chose to change.\n");
 else if (num == 4)
   printf("You chose to delete.\n");
 else
   printf("Plese enter a correct option:\n");
   scanf("%d",&num);
 }
 exit(0);
}