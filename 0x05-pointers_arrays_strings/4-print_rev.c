#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: The string to be reversed
 *
 */
void print_rev(char *s)
{
	int count = 0;

	while ((s[count]) != '\0')
	{
		count = count + 1;
	}
	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
