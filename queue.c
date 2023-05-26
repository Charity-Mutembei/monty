#include "monty.h"

/**
 * f_stack - Set the data format to stack (LIFO)
 * @stack: Stack head
 * @line_number: Line number
 */
void f_stack(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
/* No action required as stack is the default behavior */
}

/**
 * f_queue - Set the data format to queue (FIFO)
 * @stack: Stack head
 * @line_number: Line number
 */
void f_queue(stack_t **stack, unsigned int line_number)
{
    (void)stack;
	(void)line_number;
	stack_second.sight = 1;
}

