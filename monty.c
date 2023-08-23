#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *file;
     if (argc != 2)
	 {
		fprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	 }
	file = fopen(argv[1],"r");
	if (!file)
	{
		fprintf(STDERR_FILENO, "can't open %s", argv[1]);
	 	exit (EXIT_FAILURE);
	 }
}