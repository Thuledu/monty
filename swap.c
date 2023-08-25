#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * swap -swaps the top two elements of the stack.
 * @stack: stack
 */

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, int value) {
    if (stack->top == STACK_SIZE - 1) {
        printf("Error: Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->stack[++stack->top] = value;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->stack[stack->top--];
}

void swap(Stack* stack) {
    if (stack->top < 1) {
        printf("Error: can't swap, stack too short\n");
        exit(EXIT_FAILURE);
    }
    int temp = stack->stack[stack->top];
    stack->stack[stack->top] = stack->stack[stack->top - 1];
    stack->stack[stack->top - 1] = temp;
}

int main() {
    Stack* stack = createStack();

    // Push some values onto the stack
    push(stack, 10);
    push(stack, 20);

    // Swap the top two elements of the stack
    swap(stack);

    // Print the stack
    while (!isEmpty(stack)) {
        printf("%d ", pop(stack));
    }

    free(stack);

    return 0;
}
