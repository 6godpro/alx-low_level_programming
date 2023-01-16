#include "shell.h"

char *concat_path(char *pathname, char *progname)
{
	int prog_len = 0, path_len = 0, new_sz = 0;

	prog_len = _strlen(progname);
	path_len = _strlen(pathname);
	new_sz = sizeof(char) * (path_len + prog_len + 2);
	pathname = _realloc(pathname, (path_len + 1), new_sz);
	if (!pathname)
		return (NULL);

	_strcat(pathname, "/");
	_strcat(pathname, progname);

	return (pathname);
}

char *find(char *cname)
{
	char *env_path = NULL, **p_tokns = NULL;
	int i = 0, num_del = 0;
	struct stat sb;

	if (cname)
	{
		if (stat(cname, &sb) != 0 && cname[0] != '/')
		{
			env_path = _getenv("PATH");
			num_del = count_delims(env_path, ":") + 1;
			p_tokns = tokenize(env_path, ":", num_del);

			while (p_tokns[i])
			{
				p_tokns[i] = concat_path(p_tokns[i], cname);

