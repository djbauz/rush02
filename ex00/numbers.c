#include "ft_strlen.c"
#include "ft_strcmp.c"
#include <stdio.h>

void numbers(char *num)
{
	struct rush_dict
	{
		char *numb;
		char *val;
	};
	int n;

	n = 0;
	struct rush_dict tab[4];
	tab[0].numb = "100";
	tab[0].val = "hundred";
	tab[1].numb = "80";
	tab[1].val = "eighty";
	tab[2].numb = "7";
	tab[2].val = "seven";
	tab[3].numb = "9";
	tab[3].val = "nine";

	if (ft_strlen(num) == 3)
	{
		while (n < 4) 
		{
			if (tab[n].numb[0] == num[0] && tab[n].numb[1] == '\0')
				printf("%s ", tab[n].val);
			n++;
		}
		n = 0;
		while (n < 4)
		{
			if (ft_strcmp(tab[n].numb, "100") == 0)
				printf("%s ", tab[n].val);
			n++;
		}
		n = 0;
		while (n < 4) 
		{
			if (tab[n].numb[0] == num[1] && tab[n].numb[1] == '0' && tab[n].numb[2] == '\0')
				printf("%s ", tab[n].val);
			n++;
		}
		n = 0;
		while (n < 4) 
		{
			if (tab[n].numb[0] == num[2] && tab[n].numb[1] == '\0')
				printf("%s ", tab[n].val);
			n++;
		}
	}
}

int main (void)
{
	numbers("987");
	return (0);
}