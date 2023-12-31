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
	stack_t *t;
	(void)counter;
	
	t = *head;
	if (t == NULL)
	{
		return;
	}

	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
