#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * after a separatores of words
 * @str: the string
 * Return: pointed to the capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		i == 0)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
