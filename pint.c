#include "monty.h"

/**
 * f_pint - program that prints the value at the top of the stack
 * @head: the stack head
 * @counter: the line number
 * Return: void
 */
void f_pint(stack_t **head, unsigned int counter) {
    
    if (stack_is_empty(*head)) {
        fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    
    printf("%d\n", (*head)-> n);
}
