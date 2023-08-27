#include "monty.h"
#include <stdio.h>

/**
 * mul_opcode - multiplies the top two elements of the stack.
 * @head: stack the head
 * @counter: the line number
 * Return: void
*/
void mul_opcode(stack_t **head, unsigned int counter)
{
	stack_t *head;
	int ax;
	int len = 0;

	t = *head;
	while (t)
	{
		t = t->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	ax = t->next->n * t->n;
	t->next->n = ax;
	*head = t->next;
	free(t);
}
