#include "monty.h"
#include <stdio.h>

/**
 * mod_opcode - program computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack the head
 * @counter:the line number
 * Return: no return
*/
void mod_opcode(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	ax = t->next->n % t->n;
	t->next->n = ax;
	*head = t->next;
	free(t);
}
