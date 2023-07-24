#include "main.h"
/**
 * _strcpy - copies the string pointed to another string
 * @dest: the string to write
 * @src: the string to copie
 * Return: the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
