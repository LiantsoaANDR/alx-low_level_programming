#include "main.h"
/**
 * leet - encodes a string into 1337
 * a and A to 4
 * e and E to 3
 * o and O to 0
 * t and T to 7
 * l and L to 1
 *
 * @str: the string to encode
 * Return: the pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
		}
	}

	return (str);
}
