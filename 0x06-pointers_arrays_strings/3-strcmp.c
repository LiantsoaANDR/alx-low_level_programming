#include "main.h"
/**
 * _strcmp - compares two strings character by character
 * @s1: a string to compare
 * @s2: the second string to compare
 * Return: int equal to the difference between the value of the char in ASCII
 * so, 0 if strings are equal
 * >0 if the first non matching char in s1 is greater than that of s2
 * <0 if the first non matching char in s1 is lower that that of s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0' && s2[i] != '0'; i++)
	{
		j = s1[i] - s2[i];
		if (j != 0)
		{
			break;
		}
	}

	return (j);
}
