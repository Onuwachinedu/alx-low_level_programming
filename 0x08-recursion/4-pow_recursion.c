#include "main.h"

/**
 * _pow_recursion - gets the power of an integer recursively
 *
 * @x: the base integer
 * @y: the exponent
 *
 * Return: returns the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
