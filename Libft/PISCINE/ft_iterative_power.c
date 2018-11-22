/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 12:09:18 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/09 14:48:22 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	res = 1;
	i = power;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
		return (0);
	while (i != 0)
	{
		res = res * nb;
		i--;
	}
	return (res);
}
