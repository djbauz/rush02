/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madorna- <madorna-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:35:59 by madorna-          #+#    #+#             */
/*   Updated: 2020/02/22 17:21:45 by madorna-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		one_arg(char *args);

void	read_args(int count, char **args)
{
	if (count != 2 && count != 3)
	{
		write(1, "Error\n", 6);
		return ;
	}
	else if (count == 2)
	{
		write(1, "1 param", 8);
		one_arg(args[1]);
	}
	else if (count == 3)
	{
		write(1, "2 params", 9);
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