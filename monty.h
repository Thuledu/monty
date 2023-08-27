#ifndef MONTY_H_
#define MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#define MAX_STACK_SIZE 100
#define STACK_SIZE 100



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t; 


typedef struct {
    int stack[STACK_SIZE];
    int top;
} Stack;

Stack* createStack() {
    Stack* newStack = (Stack*)malloc(sizeof(Stack));
    newStack->top = -1;
    return newStack;
}

typedef struct bus_p
{
	char *content;
	char *arg;
	int lifi;
	FILE *file;
}  bus_m;
extern bus_m bus;


typedef struct Node {
    int data;
    struct Node* top;
    struct Node* next;
} Node;


/*
void push_opcode(stack_t **head, unsigned int counter);
void pall_opcode(stack_t **head, unsigned int counter);*/
void free_stack(stack_t *head);
int stack_is_empty(stack_t *head);
void swap(Stack* stack);
int isEmpty(Stack* stack);
/*void push(Stack* stack, int value);*/
int pop(Stack* stack);

/*
void f_pop(stack_t **head, unsigned int counter);
int process_instruction(char *instruction, stack_t **stack, unsigned int line_number);
void push(stack_t **stack, int value);
void pop(stack_t **stack);
void add(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
int is_numeric(const char *str);
*/

#endif /*MONTY_H_*/
