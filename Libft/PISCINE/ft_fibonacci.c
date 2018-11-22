/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:52:58 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/09 14:52:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 1 || index == 2)
		return (1);
	else if (index == 3)
		return (2);
	else
	{
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	return (0);
}
