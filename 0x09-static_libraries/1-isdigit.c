#include "main.h"

/**
 * _isdigit - This function checks if a parameter is a digit
 *
 * @c: The parameter to be evaluated
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
