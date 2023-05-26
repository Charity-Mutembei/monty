#ifndef _MONTY_
#define _MONTY_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

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

typedef struct stack_second_ts
{
    char *arg;
    char *value;
    FILE *file;
    int sight;
} stack_second_t;

/* Global variable: stack (linked list) */
extern stack_second_t stack_second;
/* Function prototypes */
void process_instructions(FILE *file);
void execute_instruction(char *opcode, unsigned int line_number);

void stack_free(stack_t *stack);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
int main(int argc, char *argv[]);
int execute(char *value, stack_t **stack, unsigned int line_number, FILE *file);
void addnode(stack_t **stack, int n);
void queue(stack_t **stack, unsigned int line_number);
void addqueue(stack_t **stack, int n);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void f_div(stack_t **stack, unsigned int line_number);
void f_mul(stack_t **stack, unsigned int line_number);
void f_mod(stack_t **stack, unsigned int line_number);

#endif
