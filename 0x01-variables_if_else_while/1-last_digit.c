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
printf("last digit of ",n);
if ((n % 10) > 5)
{
printf("greater than 5/n");
}
if (n == 0 )
{
printf("0");
}
if (n < 6 && n !=0)
{
printf ("less than six not zero");
}

printf("\n");

return (0);
}
