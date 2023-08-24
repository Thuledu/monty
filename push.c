#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push_opcode - adds node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void push_opcode(stack_t **head, unsigned int counter)
{
	int n;
	int k = 0, flag = 0;

	if (!b.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}
	if (b.arg[0] == '-')
		k++;
	for (; b.arg[k] != '\0'; k++)
	{
		if (b.arg[k] > '9' || b.arg[] < '0')
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}

	n = atoi(b.arg);
	if (b.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
