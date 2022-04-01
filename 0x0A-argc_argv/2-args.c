#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	(void)argc;
	while (*(argv))
	{
		printf("%s\n", *(argv));
		argv++;
	}

	exit(EXIT_SUCCESS);
}
