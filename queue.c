#include "monty.h"
/**
 * queue - Set the data format to queue (FIFO)
 * @stack: Stack head
 * @line_number: Line number
 */
void f_queue(stack_t **stack, unsigned int line_number)
{
stack_t *current;
(void)line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;

current = *stack;
while (current->next != NULL)
current = current->next;

current->next = *stack;
(*stack)->prev = current;
*stack = (*stack)->next;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
stack_second.sight = 1; /* Set the queue flag to indicate queue mode */
}