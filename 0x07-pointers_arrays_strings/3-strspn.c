#include "main.h"
/**
 * _strspn - Entry for strings to be checked
 * @s: String to be checked
 * @accept: String of charcaters to be checked
 * Return: length of prefix checked
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				len++;
				break;
			}
			accept++;
		}
		if (*accept == '\0')
		{
			break;
		}
		s++;
	}
	return (len);
}
