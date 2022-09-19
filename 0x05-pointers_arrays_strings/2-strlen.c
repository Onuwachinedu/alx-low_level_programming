#include "main.h"

/**
 * _strlen - caluclates the lenght of the string
 *
 * @s: The string in question
 *
 * Return: Always 0 (Success)
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
