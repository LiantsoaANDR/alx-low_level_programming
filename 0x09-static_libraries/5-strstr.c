#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack, the terminating null bytes are not compared
 * @haystack: pointer to the string to be scanned
 * @needle: pointer to the string to be searched
 * Return: pointer to the beginning of the located substring
 * return NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
	}

	return (0);
}
