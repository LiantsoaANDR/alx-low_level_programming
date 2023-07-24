#include "main.h"
/**
 * _strlen - give the length of a string
 * @s: the string
 * Return: the length of s as an int
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
