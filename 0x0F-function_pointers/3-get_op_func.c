#include "3-calc.h"
/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: the operation asked
 * Return: pointer to the function that correponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (!ops[i].op)
	{
		if (ops[i] == *s)
			return (ops[i].f);
		i++;
	}
	return (0);
}
