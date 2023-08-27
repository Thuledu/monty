#include "monty.h"
#include <stdio.h>

/**
 * pop_opcode - program that prints the top
 * @head: stacks the head
 * @counter:the line number
 * Return: void
*/
void pop_opcode(stack_t **head, unsigned int counter)
{
	stack_t *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	*head = n
	*head = n->next;
	free(n);
}
