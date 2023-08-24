#include <stdio.h>
#include "monty.h"
#define MAX_STACK_SIZE 100

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

int main() {
    stack[++top] = 1;
    stack[++top] = 2;
    stack[++top] = 3;
    
    pall_opcode();
    
    return 0;
}
