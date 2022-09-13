#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase times
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int b = 0;

	while (b < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		b++;
	}
}

