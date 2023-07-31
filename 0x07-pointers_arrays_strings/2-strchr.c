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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c || c == 0)
		{
			return (&s[i]);
		}
	}

	return ('\0');
}
