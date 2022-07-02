#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is ",n);
if ((n % 10) > 5)
{
printf("greater than 5\n");
}
if ((n % 10) == 0 )
{
printf("and is 0\n");
}
if (n < 6 && n !=0)
{
printf ("less than 6 not 0");
}
return (0);
}
