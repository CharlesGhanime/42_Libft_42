/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:53:57 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/22 19:44:18 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cdigits(int n)
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

char		*ft_itoa(int n)
{
	int		neg;
	size_t	len;
	char	*tab;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = (n < 0) ? 1 : 0;
	n = (neg == 1) ? n * -1 : n;
	len = cdigits(n);
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
