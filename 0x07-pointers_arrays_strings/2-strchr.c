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
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (&s[i]);
	}
}
