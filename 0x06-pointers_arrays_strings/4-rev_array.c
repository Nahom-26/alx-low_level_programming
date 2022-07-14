#include "main.h"

/**
 * reverse_array - reverss an array of integers
 * @a: array;
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int a;
	int temp;

	a = 0;
	n = n - 1;
	while (a <= n)
	{
		temp = a[a];
		a[a] = a[n];
		a[n] = temp;
		a++;
		n--;
	}
}
