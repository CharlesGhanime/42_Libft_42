/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:30:45 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/05 16:13:40 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_xyz(char x, char y, char z)
{
	ft_putchar(x + 48);
	ft_putchar(y + 48);
	ft_putchar(z + 48);
	if (x == 7 && y == 8 & z == 9)
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = 0;
	y = 0;
	z = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_print_xyz(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
