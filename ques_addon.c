#include "monty.h"
/**
 * queue - prints the top
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
*/
void queue(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
stack_second.sight = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @stack: head of the stack
 * Return: no return
*/
void addqueue(stack_t **stack, int n)
{
stack_t *new_node, *s;

s = *stack;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;
if (s)
{
while (s->next)
s = s->next;
}
if (!s)
{
*stack = new_node;
new_node->prev = NULL;
}
else
{
s->next = new_node;
new_node->prev = s;
}
}
