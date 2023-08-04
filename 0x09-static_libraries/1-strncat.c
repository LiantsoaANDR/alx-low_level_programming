#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the string that gets the other string
 * @src: the string to add
 * @n: the limit of the char of src to add
 * Return: string form the concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (n == 0)
		{
			break;
		}
		dest[l] = src[i];
		l++;
		n--;
	}

	return (dest);
}
