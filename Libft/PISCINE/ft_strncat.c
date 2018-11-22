/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:37:52 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/14 14:24:09 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int x;
	int len;

	x = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while ((src[x] != '\0') && (x < nb))
	{
		dest[len] = src[x];
		len++;
		x++;
	}
	dest[len++] = '\0';
	return (dest);
}
