#include "main.h"

/*
 *_strlen_recursion - returns str length
 * @s: string to calculate length
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s));
}
