/*
input measurement in inches or centimetres
display its value in inches or centimetres
*/
#include <stdio.h>

main()

{

const double factor = 2.54;

int x, in, cm;

char ch = 0;

printf("Enter length in inches (i) or centimetres (c)\n");

printf("for example: 4i or 10c\n");

printf("enter length: ");

scanf("%d%c",&x,&ch);

if ( ch == 'i' )

{

in = x;

cm = x * factor;

}

else if ( ch == 'c' )

{

in = x / factor;

cm = x;

}

else if ( ( ch != 'i' ) && ( ch != 'c' ) )

in = cm = 0.0;

printf(" inches = %d,cm =%d\n",in,cm);

return 0;

}

