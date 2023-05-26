#include "monty.h"
stack_second_t stack_second = {NULL, NULL, NULL, 0};
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_number: line_counter
* @file: poiner to monty file
* @value: line content
* Return: no return
*/
int execute(char *value, stack_t **stack, unsigned int line_number, FILE *file)
{
instruction_t opst[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
{"sub", sub},
{"div", f_div},
{"mul", f_mul},
{"mod", f_mod},
{"pchar", f_pchar},
{"pstr", f_pstr},

{NULL, NULL}
};
unsigned int i = 0;
char *op;

op = strtok(value, " \n\t");
if (op && op[0] == '#')
return (0);
stack_second.arg = strtok(NULL, " \n\t");
while (opst[i].opcode && op)
{
if (strcmp(op, opst[i].opcode) == 0)
{	opst[i].f(stack, line_number);
return (0);
}
i++;
}
if (op && opst[i].opcode == NULL)
{ fprintf(stderr, "L%d: unknown instruction %s\n", line_number, op);
fclose(file);
free(value);
stack_free(*stack);
exit(EXIT_FAILURE); }
return (1);
}
