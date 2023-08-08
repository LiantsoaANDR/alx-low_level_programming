#include "main.h"
#include <stdlib.h>
/**
 * _strdup - create a pointer of a copy of a given string
 * @str: the string to copy
 * Return: a pointer to the duplicated string
 * NULL if str is NULL or insufficient memory was available
 */
char *_strdup(char *str)
{
	int i = 0;
	char *new;

	if (!str)
		return (0);
	while (str[i])
		i++;

	new = malloc((i + 1) * sizeof(char));
	if (!new)
		return (0);
	for (i = 0; str[i]; i++)
		new[i] = str[i];

	return (new);
}
