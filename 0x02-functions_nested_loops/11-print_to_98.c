#include <stdio.h>

/**
 * print_to_98 - A function that counts to 98
 *
 * @n: the function parameter
 *
 * Return: Always 0 (Success)
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
