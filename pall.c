#include <stdio.h>
#include "monty.h"

int stack[MAX_STACK_SIZE];
int top = -1;

void pall_opcode() {
    if (top == -1) {
        return;
    }

    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
