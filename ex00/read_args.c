/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madorna- <madorna-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:35:59 by madorna-          #+#    #+#             */
/*   Updated: 2020/02/22 18:49:02 by madorna-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		one_arg(char *args);

void	read_args(int count, char **args)
{
	if (count != 2 && count != 3)
	{
		write(1, "Error\n", 6);
		return;
	}
	else if (count == 2)
	{
		write(1, "1 param\n", 9);
		write(1, args[1], one_arg(args[1]));
	}
	else if (count == 3)
	{
		write(1, "2 params\n", 10);
		write(1, args[1], one_arg(args[1]));
		write(1, "\n", 1);
		write(1, args[2], one_arg(args[2]));
	}
}

int		one_arg(char *args)
{
	int i;
	
	i = 0;
	while (args[i] != '\0')
	{
		i++;
	}
	return (i);
}
