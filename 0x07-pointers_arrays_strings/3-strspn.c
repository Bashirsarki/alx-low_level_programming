#include "main.h"
/**
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
		if (*s != *accept)
		{
			break;
		}
		s++;
	}
	return (len);
}
