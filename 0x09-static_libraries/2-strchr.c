#include "main.h"

/**
 * _strchr - function to search for occurence of a string
 *
 * @s: string to be scanned
 * @c: character to be searched for in s
 *
 * Return: returns on first occurrence of cor Null
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
