#include "monty.h"

/**
 * rotl - Rotate the stack to the top
 * @stack: Stack head
 * @line_number: Line number
 */
void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
(void)line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;

while (current->next != NULL)
current = current->next;

current->next = *stack;
(*stack)->prev = current;
*stack = (*stack)->next;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}
