/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madorna- <madorna-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:35:59 by madorna-          #+#    #+#             */
/*   Updated: 2020/02/22 20:18:08 by madorna-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int one_arg(char *args);

void read_args(int count, char **args) // This func reads args from execution command
{
	if (count != 2 && count != 3)
	{
		write(1, "Error\n", 6);
		exit (0);
	}
	else if (count == 2)
	{
		write(1, "1 param\n", 8);
		write(1, args[1], one_arg(args[1]));
		write(1, "\n", 1);
	}
	else if (count == 3)
	{
		write(1, "2 params\n", 9);
		write(1, args[1], one_arg(args[1]));
		write(1, "\n", 1);
		write(1, args[2], one_arg(args[2]));
		write(1, "\n", 1);
	}
}

int one_arg(char *args) // gets number of char in the execution args, one by one (arg1 and then arg2)
{
	int i;

	i = 0;

	while (args[i] != '\0')
	{
		if (args[i] >= '0' && args[i] <= '9')
		{
			i++;
		}
		else
		{
			write(1, "Error\n", 6);
			exit (0);
		}
	}
	return (i);
}
