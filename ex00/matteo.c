#include <fcntl.h> // open and create
#include <unistd.h> // close
#include <stdio.h>
#include <stdlib.h>
#include "read_args.c"
#include "ft_strcmp.c"
#include "ft_strncpy.c"
#define PATH "numbers.dict"

int main(int argc, char **argv)
{
	int fd, sz;
	char *c;
	int n;
	int count;
	char *destination;

	struct rush_dict
	{
		char *num;
		char *val;
	};

	destination = malloc(100);
	struct rush_dict *tab;
	tab = (struct rush_dict *) malloc(sizeof(struct rush_dict));
	count = 0;
	c = (char *) malloc(sizeof(char) * 100);
	n = 0;
	printf("argc= %d\n", argc);
	printf("argv= %s\n", argv[1]);
	fd = open (PATH, O_RDONLY);
	sz = read(fd, c, 100);
	
	c[sz] = '\0';

	read_args(argc, argv);
	while (c[n] != 10)
	{
		n++;
	}
	ft_strncpy(destination, c, n);
	destination[n] = '\0';
	printf("destintation=  %s\n", destination);
	while (c[n] != 10)
	{
		n++;
	}
	close(fd);
	return (0);
}