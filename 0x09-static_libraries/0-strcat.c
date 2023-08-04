#include "main.h"
/**
 * _strcat - appends a string to an other string
 * @dest: the string that receive the other string
 * @src: the string to append
 * Return: a string from adding src to dest
 */
char *_strcat(char *dest, char *src)
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
		dest[l] = src[i];
		l++;
	}

	return (dest);
}
