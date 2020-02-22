#include <fcntl.h> // open and create
#include <unistd.h> // close
#include <stdio.h>
#include <stdlib.h>
#define PATH "numbers.dict"

int main(int argc, char **argv)
{
	int fd, sz;
	char *c;
	int n;
	int count;

	count = 0;
	c = (char *) malloc(sizeof(char) * 100);
	n = 1;

	printf("argc= %d\n", argc);
	printf("argv= %s\n", argv[1]);
	fd = open (PATH, O_RDONLY);
	sz = read(fd, c, 100);
	//printf("fd = %d\n", fd);
	//printf("called read(%d, c, 100).  returned that %d bytes  were read.\n", fd, sz); 
	c[sz] = '\0';
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