#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - print contents of stack_t
 * @stack: stack
 * @line_cnt: count error messages
 *
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	stack_t *current = *stack;

	while (current)
	{
		if (current->n <= 0 || current->n > 127)
			break;
		putchar((char) current->n);
		current = current->next;
	}
	putchar('\n');
}

