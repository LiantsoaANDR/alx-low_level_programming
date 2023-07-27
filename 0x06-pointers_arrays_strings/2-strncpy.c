#include "main.h"
/**
 * _strncpy - copies n characters of a string to another one
 * @dest: pointer to the string where the content is to be copied
 * @src: the string to be copied
 * @n: limit of the number of characters to be copied
 * Return: the pointer to the string that received the copie
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;
	int i;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (n == 0)
		{
			break;
		}
		dest[i] = src[i];
		l--;
		n--;
	}
	if (l == 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
