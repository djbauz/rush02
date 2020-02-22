/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbante <mbante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:00:59 by mbante            #+#    #+#             */
/*   Updated: 2020/02/22 18:13:31 by mbante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int resultado;

	i = 0;
	resultado = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] - s2[i] == 0)
		{
			i++;
		}
		else
		{
			resultado = s1[i] - s2[i];
			break ;
		}
	}
	return (resultado);
}
