#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing all possible combinations of single digits
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

