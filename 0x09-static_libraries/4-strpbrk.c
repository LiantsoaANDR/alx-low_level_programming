#include "main.h"
/**
 * _strpbrk - finds the first char in a string
 * that matches any char of another string
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the char to match
 * Return: pointer to the char in s that matches one of char in accept
 * or NULL if no such char is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	for (; *s != '\0'; s++)
	{
		for (a = 0; *(accept + a) != '\0'; a++)
		{
			if (*s == *(accept + a))
			{
				return (s);
			}
		}
	}

	return (0);
}
