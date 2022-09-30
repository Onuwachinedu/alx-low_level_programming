#include "main.h"

/**
 * _abs - This function only returns positive numbers
 *
 * @i: This is the integer being evaluated
 *
 * Return: Always 0 (Success)
 *
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		return (i);
	}
	else
	{
		return (i);
	}
}
