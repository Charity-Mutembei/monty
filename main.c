#include "monty.h"
/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */

int main(int argc, char *argv[])
{
FILE *file;
stack_t *stack = NULL;

if (argc != 2)
{
printf("USAGE: monty file\n");
return (EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (file == NULL)
{
printf("Error: Can't open file %s\n", argv[1]);
return (EXIT_FAILURE);
}

process_instructions(file, &stack);

fclose(file);
return (EXIT_SUCCESS);
}

/**
 * process_instructions - Read and process the instructions from a file.
 * @file: Pointer to the file containing the instructions.
 * @stack: Pointer to the stack.
 */
void process_instructions(FILE *file, stack_t **stack)
{
char line[256];
unsigned int line_number = 0;
char *opcode;

while (fgets(line, sizeof(line), file) != NULL)
{
line_number++;

opcode = strtok(line, " \n\t\r");
if (opcode == NULL || opcode[0] == '#')
continue;

execute(opcode, line_number, stack);
}
}

/**
 * execute - Execute the corresponding opcode function.
 * @opcode: Opcode to execute.
 * @line_number: Line number in the file.
 * @stack: Pointer to the stack.
 */
void execute(char *opcode, unsigned int line_number, stack_t **stack)
{
if (strcmp(opcode, "push") == 0)
{
push(stack, line_number);
}
else if (strcmp(opcode, "pall") == 0)
{
pall(stack);
}
else
{
printf("L%u: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
}
