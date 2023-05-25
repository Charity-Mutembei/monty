#include "monty.h"
/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the stack (linked list).
 * @line_number: Line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
char *arg = strtok(NULL, " \n\t\r");
int value;
stack_t *new_node;

if (arg == NULL || !isdigit(arg[0]))
{
printf("L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

value = atoi(arg);

new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error: malloc failed\n");
exit(EXIT_FAILURE);
}

new_node->n = value;
new_node->prev = NULL;
new_node->next = *stack;

if (*stack != NULL)
(*stack)->prev = new_node;

*stack = new_node;
}

