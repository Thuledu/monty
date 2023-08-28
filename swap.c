#include "monty.h"
#include <stdio.h>

/**
 * swap_opcode - program that adds the top two elements of the stack.
 * @head: stack the head
 * @counter: the line number
 * Return: void
*/
void swap_opcode(stack_t **head, unsigned int counter)
{
	stack_t *t;
	int length = 0;
	int ax;

	t = *head;
	while (t)
	{
		t = t->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	ax = t->n;
	t->n = t->next->n;
	t->next->n = ax;
}
