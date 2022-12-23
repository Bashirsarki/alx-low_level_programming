#include "main.h"
/**
 * _strcmp - Entry point for strings to  be compared
 * @s1: string to be compared
 * @s2: string to be comapared
 * Return: positive int , negative or 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
		{
			a = *s1 - *s2;
			return (a);
		}
		else if (*s1 < *s2)
		{
			b = *s1 - *s2;
			return (b);
		}
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (b);
	else
		return (a);

}
