#include "main.h"
/*
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
*/

int _strlen(char *s)
{
	int c;

	while (*s != '\0')
	{
		c += 1;
		*s = *s + 1
	}
	return (c);
}
