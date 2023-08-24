#include "monty.h"

void error_report(int line_number, char *error_msg)
{
	fprintf(stderr, "L%d: %s\n", line_number, error_msg);
	exit(EXIT_FAILURE);
}

void malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}