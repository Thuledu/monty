#include "monty.h"
#include <stdio.h>

bus_m bus = {NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	stack_t *stack = NULL;
	unsigned int counter = 0;
	size_t sz = 0;
	ssize_t read_line = 1;
	FILE *f;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	bus.file = f;
	if (!f)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		cont = NULL;
		read_line = gets(&cont, &sz, f);
		bus.content = cont;
		counter++;
		if (read_line > 0)
		{
			execute(cont, &stack, counter, f);
		}
		free(cont);
	}
	free_stack(stack);
	fclose(f);
	return (0);
}
