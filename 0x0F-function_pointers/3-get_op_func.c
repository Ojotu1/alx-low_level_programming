#include "3-calc.h"
/**
 * get _opfunc - get the operator and redirect to the function
 * @s: the operator
 * Description: get the operator and redirect to the function
 * Return: return null or the funciton to do
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
	int e;

	e = 0;
	while (e < 5)
	{
		if (strcmp(s, ops[e].op) == 0)
		{
		return (*(ops[e]).f);
		}
		e++;
	}
	return (NULL);
}

