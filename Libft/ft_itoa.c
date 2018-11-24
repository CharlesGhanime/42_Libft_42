/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:53:57 by cghanime          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/11/24 18:44:58 by cghanime         ###   ########.fr       */
=======
/*   Updated: 2018/11/23 23:23:27 by cghanime         ###   ########.fr       */
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======
static int	counter_terrorist(int n)
{
	int		counter_terrorist;

	counter_terrorist = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		counter_terrorist++;
	}
	return (counter_terrorist);
}

>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
char		*ft_itoa(int n)
{
	int		neg;
	size_t	len;
	char	*tab;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = (n < 0) ? 1 : 0;
	n = (neg == 1) ? n * -1 : n;
<<<<<<< HEAD
	len = ft_counter(n);
=======
	len = counter_terrorist(n);
>>>>>>> 42709cad90597fc5607183573c3c4efcf4113470
	if (!(tab = (char *)malloc(sizeof(char) * len + neg + 1)))
		return (NULL);
	tab[len + neg] = '\0';
	while (len > 0)
	{
		tab[--len + neg] = n % 10 + 48;
		n /= 10;
	}
	tab[0] = neg == 1 ? '-' : tab[0];
	return (tab);
}
