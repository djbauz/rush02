#include <fcntl.h> // open and create
#include <unistd.h> // close
#include <stdio.h>
#include <stdlib.h>
#include "read_args.c"
#define PATH "numbers.dict"

int main(int argc, char **argv)
{
	int fd, sz;
	char *c;
	int n;
	int count;

	struct rush_dict
	{
		char num[];
		char val[];
	};

	struct rush_dict *tab;
	tab = (struct rush_dict *) malloc(sizeof(struct rush_dict));
	count = 0;
	c = (char *) malloc(sizeof(char) * 100);
	n = 1;
	printf("argc= %d\n", argc);
	printf("argv= %s\n", argv[1]);
	fd = open (PATH, O_RDONLY);
	sz = read(fd, c, 100);
	
	tab[0].num = "Hola";
	printf("tab0 %s\n", tab[0].num);
	tab[0].num = "Hala";
	printf("tab0 %s\n", tab[0].num);

	// while (c[count] != '\n')
	// {
	// 	tab[0].num[count] = 'a';
	// 	count++; 
	// }
	printf("tab0 %s\n", tab[0].num);



	//printf("fd = %d\n", fd);
	//printf("called read(%d, c, 100).  returned that %d bytes  were read.\n", fd, sz); 
	c[sz] = '\0';

	read_args(argc, argv);

	//printf("Those bytes are as follows: \n%s\n", c);
	while (c[n] != '\0')
	{
		if(c[n] == argv[1][0])
		{
			count++;
			printf("%c %d\n", c[n], count);
		}
		n++;
	}
	close(fd);
	return (0);
}