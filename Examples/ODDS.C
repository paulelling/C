/*
generate running total for all odd numbers between 1 and 100
display total
*/

#include <../include/stdio.h>

main()
{
 int i, total;
 
 for (i = 1; i < 100; i+=2)
 {
  printf("\n%d",i);
  total = total + i;
  printf("\ntotal = %d", total);
 }
 
 printf("\nfinal total = %d", total);
 
 return 0;
}