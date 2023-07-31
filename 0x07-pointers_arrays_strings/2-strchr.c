#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to locate the char
 * @c: the char to locate
 * Return: a pointer to the first occurrence of the char
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
