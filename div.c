#include "monty.h"
#include <stdio.h>

/**
 * div_opcode - divides the top two elements of the stack.
 * @head: stack the head
 * @counter: the line number
 * Return: void
*/
void div_opcode(stack_t **head, unsigned int counter)
{
	stack_t *head;
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	t = *head;
	if (t->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ax = t->next->n / t->n;
	t->next->n = ax;
	*head = t->next;
	free(t);
}
