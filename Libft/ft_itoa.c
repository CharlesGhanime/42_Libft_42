/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:15:57 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/19 15:15:19 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countdigits(int n)
{
	int cdigits;

	cdigits = 0;
	if (n <= 0)
		cdigits = 1;
	while (n != 0)
	{
		n = n / 10;
		cdigits++;
	}
	return (cdigits);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		signe;
	char	*nb;

	i = 0;
	signe = 1;
	nb = (char *)malloc(sizeof(char) * ((ft_countdigits(n)) + 1));
	i = ft_countdigits(n);
	while (n != 0)
	{
		nb[i--] = n % 10;
		n = n / 10;
	}
	return (nb);
}
