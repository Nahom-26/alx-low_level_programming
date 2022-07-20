#include "main.h"

/**
 *_strlen_p - returns length
 *@s:string
 *Return:length
 */

int _strlen_p(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_p(++s));
	}
}
/**
 *_test - palindrome?
 *@l:length
 *@s:string
 *Return:boolean
 */

int _test(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (_test(s + 1, l - 2));
	}
	return (0);
}
