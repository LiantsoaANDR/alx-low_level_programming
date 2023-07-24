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
	char rev;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		rev = s[i];
		s[i] = s[l - 1];
		l--;
		s[l] = rev;
	}
}
