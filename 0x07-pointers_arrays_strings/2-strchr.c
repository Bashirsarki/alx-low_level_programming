#include "main.h"
#include <stddef.h>
/**
 * _strchr - Entry point for string to be checked
 * @s: String pointer to be returned
 * @c: character to be checked
 * Return: return pointer to s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;
	}
	return (NULL);
}
