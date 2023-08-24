#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "monty.h"
#define STACK_SIZE 100

int stack[STACK_SIZE];
int top = -1;

bool is_integer(const char *str) {
    if (str == NULL || *str == '\0') {
        return false;
    }
    while (*str) {
        if (*str < '0' || *str > '9') {
            return false;
        }
        str++;
    }
    return true;
}

void push_to_stack(int value) {
    if (top == STACK_SIZE - 1) {
        fprintf(stderr, "Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++top] = value;
}

void push_opcode(const char *arg) {
    if (!is_integer(arg)) {
        fprintf(stderr, "L<line_number>: usage: push integer\n");
        exit(EXIT_FAILURE);
    }
    int value = atoi(arg);
    push_to_stack(value);
}

int main() {
    
    push_opcode("1");
    push_opcode("2");
    push_opcode("3");
    
    return 0;
}
