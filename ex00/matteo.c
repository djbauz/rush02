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

	struct rush_dict
	{
		char *num;
		char *val;
	};

	struct rush_dict *tab;
	tab = (struct rush_dict *) malloc(sizeof(struct rush_dict)*10);
	count = 0;
	c = (char *) malloc(sizeof(char) * 100);
	n = 0;
	printf("argc= %d\n", argc);
	printf("argv= %s\n", argv[1]);
	fd = open (PATH, O_RDONLY);
	sz = read(fd, c, 100);
	
	/*
	tab[0].num = "Hola";
	printf("tab0 %s\n", tab[0].num);
	tab[0].num = "Hala";
	printf("tab0 %s\n", tab[0].num);
	*/

	// while (c[count] != '\n')
	// {
	// 	tab[0].num[count] = 'a';
	// 	count++; 
	// }
	//tab[0].num[40];
	ft_strncpy(tab[0].num, c, 2);
	printf("tab0 %s\n", tab[0].num);



	//printf("fd = %d\n", fd);
	//printf("called read(%d, c, 100).  returned that %d bytes  were read.\n", fd, sz); 
	c[sz] = '\0';

	read_args(argc, argv);
	write(1, "\n", 1);

	printf("strcmp= %d\n", ft_strcmp(c, argv[1]));
	//printf("Those bytes are as follows: \n%s\n", c);
	while (c[n] != 10)
	{
		if (c[n] != 58 && n < 10)
		{
			count++;
			break ;
		}
		n++;
	}
	printf("%d\n", count);
	//tab[0].num = ft_strncpy(tab[0].num, c, count);
	//printf("%s\n", tab[0].num);
	close(fd);
	return (0);
}