/* add two numbers */

#include <../include/stdio.h>

main()
{
  int num1, num2, sum;
  
  printf("Enter a number:\n");
  scanf("%d",&num1);
  printf("Enter another number:\n");
  scanf("%d",&num2);
  
  sum = num1 + num2;
  
  printf("The sum is: %d",sum);

}