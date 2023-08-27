#include "monty.h"
#include <stdio.h>

/**
* execute - program that executes the opcode
* @stack: head linked list the stack
* @counter: the line counter
* @file: the poiner to monty file
* @content: the line content
* Return: void
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opstack[] = {
				{"push", push_opcode}, {"pall", pall_opcode}, {"pint", pint_opcode},
				{"pop", pop_opcode},
				{"swap", swap_opcode},
				{"add", add_opcode},
				{"nop", nop_opcode},
				{"sub", sub_opcode},
				{"div", div_opcode},
				{"mul", mul_opcode},
				{"mod", mod_opcode},
				{NULL, NULL}
				};
	unsigned int g = 0;
	char *opc;

	opc = strtok(content, " \n\t");
	if (opc && opc[0] == '#'){
		return (0);}
	bus.arg = strtok(NULL, " \n\t");
	while (opstack[g].opcode && opc)
	{
		if (strcmp(opc, opstack[g].opcode) == 0)
		{	opstack[g].f(stack, counter);
			return (0);
		}
		g++;
	}
	if (opc && opstack[g].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, opc);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
