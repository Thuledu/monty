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


/**
 * struct bus_p - the variables; args, file, line content
 * @arg: the value
 * @file: the pointer to monty file
 * @content: the line content
 * @lifi: the flag change stack <-> queue
 * Description: it carries values through the program
 */
typedef struct bus_p
{
	char *content;
	char *arg;
	int lifi;
	FILE *file;
}  bus_m;
extern bus_m bus;


void push_opcode(stack_t **head, unsigned int number);
void pall_opcode(stack_t **head, unsigned int number);
void pint_opcode(stack_t **head, unsigned int number);
void free_stack(stack_t *head);
void pop_opcode(stack_t **head, unsigned int counter);
void swap_opcode(stack_t **head, unsigned int counter);
void add_opcode(stack_t **head, unsigned int counter);
void nop_opcode(stack_t **head, unsigned int counter);
void sub_opcode(stack_t **head, unsigned int counter);
void div_opcode(stack_t **head, unsigned int counter);
void mul_opcode(stack_t **head, unsigned int counter);
void mod_opcode(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
#endif /*MONTY_H_*/
