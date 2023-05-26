#include "monty.h"

/**
 * rotr - Rotate the stack to the bottom
 * @stack: Stack head
 * @line_number: Line number
 */
void rotr(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
(void)line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;

while (current->next != NULL)
current = current->next;

current->next = *stack;
(*stack)->prev = current;
*stack = current;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}
