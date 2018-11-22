/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:10:40 by cghanime          #+#    #+#             */
/*   Updated: 2018/09/15 20:09:59 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

void	ft_print_params(int argc, char **argv)
{
	int x;
	int y;

	x = 0;
	while (x++ < argc - 1)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int x;

	x = 0;
	while (x++ < argc - 1)
	{
		if (x + 1 < argc && ft_strcmp(argv[x + 1], argv[x]) < 0)
		{
			argv[argc + 1] = argv[x];
			argv[x] = argv[x + 1];
			argv[x + 1] = argv[argc + 1];
			x = 0;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
