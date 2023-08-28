#include "monty.h"
#include <stdio.h>

/**
 * add_opcode - program that adds the top two elements of the stack.
 * @head: stack the head
 * @counter: the line number
 * Return: void
*/
void add_opcode(stack_t **head, unsigned int counter)
{
	stack_t *t;
	int ax;
	int length = 0;

	t = *head;
	while (t)
	{
		t = t->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	ax = t->n + t->next->n;
	t->next->n = ax;
	*head = t->next;
	free(t);
}
