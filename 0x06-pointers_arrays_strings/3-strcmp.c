#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one to compare
 * @s2: string two to compare
 * Return: an integer less than 0 if s1 is found
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
