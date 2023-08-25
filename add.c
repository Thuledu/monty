#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

// Function to add the top two elements of the stack
void f_add(stack_t **head, unsigned int counter) {
    // Check if the stack has at least two elements
    if (stack_len(*head) < 2) {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    // Pop the top two elements of the stack
    int a = stack_pop(head);
    int b = stack_pop(head);
    // Add the two elements and push the result onto the stack
    stack_push(head, a + b);
}
