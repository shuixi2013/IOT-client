#include "utils.h"
#include <string.h>

char *basename(char *path)
{
	int len = strlen(path);

	while (len >=0)
	{
		if(path[len] == "/")
			return &path[len + 1];
		len--;
	}
	return NULL
}
