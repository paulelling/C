#include <../include/stdio.h>

main()
{
 int num1, num2;
 
 while (num1 != 999 & num2 != 999)
 {
 printf("\nEnter an integer:\n");
 scanf("%d",&num1);
 printf("\nEnter another integer:\n");
 scanf("%d",&num2);
  
 if (num1 > num2)
  printf("\nnum1 > num2 and num1 >= num2 and num1 != num2\n");
 else if (num1 < num2)
  printf("\nnum1 < num2 and num1 <= num2 and num1 != num2\n");
 else 
  printf("\nnum1 = num2 and num1 >= num2 and num1 <= num2\n");
 }
  
 return 0;
 
}