/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 00:45:15 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/12 05:16:32 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int x;
	int entier;
	int signe;

	x = 0;
	entier = 0;
	signe = 1;
	while (str[x] == '\f' || str[x] == '\t' || str[x] == '\n' ||
	str[x] == '\r' || str[x] == '\v' || str[x] == ' ')
		x++;
	if (str[x] == '-')
	{
		signe = -1;
		x++;
	}
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		entier = entier * 10 + (str[x] - '0');
		x++;
	}
	return (entier * signe);
}
