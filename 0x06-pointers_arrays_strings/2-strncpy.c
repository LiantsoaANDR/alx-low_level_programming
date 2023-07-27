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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
