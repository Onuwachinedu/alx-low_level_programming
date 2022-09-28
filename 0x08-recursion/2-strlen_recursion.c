#include "main.h"

/**
 * _strlen_recursion - gets the lenght of a string recursively
 *
 * @s: The string whose lenght is to be calculated
 *
 * Return: Returns the lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
