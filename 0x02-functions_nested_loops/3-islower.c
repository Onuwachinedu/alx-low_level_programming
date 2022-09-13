#include "main.h"

/**
 * _islower - A function that checks if the case of an alphabet
 *
 * @c: parameter to be checked
 *
 * Return: Always 0 (Success);
 *
 */
int _islower(int c)
{
	if (c < 97)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
