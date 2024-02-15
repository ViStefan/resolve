#include <stdio.h>
#include <stdlib.h>

#include "resolve.h"

int main(int argc, char **argv)
{
	char *path;

	for (int i = 1; i < argc; i++)
	{
		if (resolve(argv[i], &path) == 0)
		{
			printf("%s\n", path);
			free(path);
		}
		else
		{
			perror(argv[i]);
		}
	}

	return 0;
}	

