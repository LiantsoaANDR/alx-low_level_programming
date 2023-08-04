#include "main.h"
/**
 * _strspn - counts the number of matching char of a string
 * with another string until it finds a non matching char
 * @s: pointer to the string to search
 * @accept: pointer to the string that contains the char to accept
 * Return: the number of char in s that consist only of char from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a;

	i = 0;
	for (; *s != '\0'; s++)
	{
		for (a = 0; *(accept + a) != '\0'; a++)
		{
			if (*s == *(accept + a))
			{
				i++;
				break;
			}
		}
		if (*(accept + a) == '\0')
		{
			break;
		}
	}

	return (i);
}
