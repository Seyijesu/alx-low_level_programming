/**
 * get_op_func - get the correct operation function
 * @s: operator passed as argument
 * Return: pointers
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
	{
		if (ops[i]->op == *s && !((s + 1)))
			return (ops[i]->f);
	}
	printf("Error\n");
	exit(99);
}
