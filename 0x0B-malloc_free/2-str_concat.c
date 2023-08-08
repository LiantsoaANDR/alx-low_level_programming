#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the string that receive the other string
 * @s2: the other string to add the the first one
 * Return: the concatenation of s1 and s2
 * empty if NULL is passed and NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *concat;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (!concat)
		return (0);

	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];

	for (j = 0; s2[j]; j++)
	{
		concat[i] = s2[j];
		i++;
	}

	return (concat);
}
