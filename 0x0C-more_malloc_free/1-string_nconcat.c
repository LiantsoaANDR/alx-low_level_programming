#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate with the second one
 * @s2: second string to concatenate with the first one
 * @n: the length of s2 to concatenate with s1
 * Return: pointer to allocated memory that contains s1
 * followed by the first n bytes of s2 and null terminated
 * return NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		n = j;
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (!ptr)
		return (0);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
