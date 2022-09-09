#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints alphabets in lowercase except letter q and e
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int al;

	for (al = 97; al <= 122; al++)
	{
		if ((al != 101) && (al != 113))
		{
			putchar(al);
		}
	}
	putchar('\n');
	return (0);
}
