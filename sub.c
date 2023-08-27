#include "monty.h"
#include <stdio.h>

/**
  *sub_opcode - program that subtracts the top element of
  *the stack from the second top element of the stack.
  *@head: stack the head
  *@counter: the line number
  *Return: void
 */
void sub_opcode(stack_t **head, unsigned int counter)
{
	stack_t *ax;
	int nodes;
	int s;

	ax = *head;
	for (nodes = 0; ax != NULL; nodes++)
		ax = ax->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = *head;
	s = ax->next->n - ax->n;
	ax->next->n = s;
	*head = ax->next;
	free(ax);
}
