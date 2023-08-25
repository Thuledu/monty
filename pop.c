#include "monty.h"
#include <stdio.h>
/**
 * f_pop - removes the top element of the stack
 * @head: the stack head
 * @counter: line number
 * Return: void
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
}
