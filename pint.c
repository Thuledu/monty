#include "monty.h"

/**
 * pint - program that prints the value at the top of the stack
 * @head: the stack head
 * @counter: the line number
 * Return: void
 */
void pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
