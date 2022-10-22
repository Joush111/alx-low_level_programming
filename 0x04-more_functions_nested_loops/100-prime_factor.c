#include <stdio.h>

/**
 * main - Entry point
 * @void: parameters
 * Return: 0
 */

int main(void)
{
	long int a, b;

	a = 612852475143

	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
			a /= b;
	}
		printf("%1d\n", b);

		return (0);
}
