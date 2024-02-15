#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <linux/limits.h>

#include "resolve.h"

int resolve(char *filename, char **resolved)
{
	*resolved = (char*)malloc(PATH_MAX);
	struct stat buffer;
	realpath(filename, *resolved);
	return stat(*resolved, &buffer);
}
