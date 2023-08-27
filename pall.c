#include <stdio.h>
#include "monty.h"

/**
 * pall_opcode - prints the stack
 * @head: the stack head
 * @counter: the unused parameter
 * Return: void (Success)
 */
void pall_opcode(stack_t **head, unsigned int counter)
{
	stack_t *head;
	(void)counter;

	if (head == NULL)
	{
		return;
	}

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
