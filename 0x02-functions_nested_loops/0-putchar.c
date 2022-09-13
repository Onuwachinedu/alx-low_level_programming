#include "main.h"

/**
 * print_alphabet - Prints the word _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b[10] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(b[a]);
	}
	_putchar('\n');
	return (0);
}
