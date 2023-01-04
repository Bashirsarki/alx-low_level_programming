#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Entry point for both strings
 * @s: String to be checked for character occurance
 * @accept: String of characters to be checked
 * Return: either a string or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}
	return (NULL);
}

