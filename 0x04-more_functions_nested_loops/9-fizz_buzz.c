#include <stdio.h>
/**
 * main - Entry point
 * return: 0 or 1 (success)
 */
int main(void)
{
	int i;

	for (i= 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 ==0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}


