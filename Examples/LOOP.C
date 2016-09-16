/*
input 10 integers
compute total
display total
*/

#include <../include/stdio.h>

main()
{
 int total;
 int i, num; 

 total = 0;

 for(i = 1; i <= 10; i++)
 {
  printf("\n Enter an integer: \n");
  scanf("%d",&num);
  
  total = total + num;
  printf("\n Total = %d",total);
 } 
  
  printf("\n Final total = %d",total);  
  return 0;
}