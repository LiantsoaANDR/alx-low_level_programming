#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 * no return value
 */
void rev_string(char *s)
{
	int i;
	int l;
	int j;
	char rev[sizeof(s) + 1];

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	j = 0;
	for (i = (l - 1); i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	for (j = 0; j < l; j++)
	{
		s[j] = rev[j];
	}
}
