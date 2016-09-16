#include <../include/stdio.h>

main()
{
 int emp_num;
 float first_tax = .27;
 float after_tax = .48;
 int pay, tax_free; 
 float pay_above_ten, pay_the_rest, pay_above_ten2;
 int pay_taxable;
 float tax_above, tax_below, total_tax, net_pay;
 
 printf("Enter employee number: \n");
 scanf("%d",&emp_num);
 printf("Enter pay amount: \n");
 scanf("%d",&pay);
 printf("Enter tax free allowance: \n");
 scanf("%d",&tax_free);
 
 pay_taxable = pay - tax_free;
 
 if(pay_taxable >= 10000)
 {
  pay_above_ten = pay_taxable / 10000;
  pay_above_ten2 = pay_above_ten * 10000;
  pay_the_rest = pay_taxable % 10000;
  
  tax_above = pay_above_ten2 * after_tax;
  tax_below = pay_the_rest * first_tax;
  total_tax = tax_above + tax_below;
  net_pay = pay_taxable - total_tax;
  
  printf("\n pay = " pay);
  printf("\n tax = " total_tax);
  printf("\n net pay = " net_pay);
 }
 else
 {
  printf("\n Not enough to tax.");
 }
}