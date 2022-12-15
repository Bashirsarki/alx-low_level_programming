#include "main.h"
/**
 * _isdigit - Entry point
 * @c: Single letter integer input
 * Return: 0 or 1 (Success)
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
