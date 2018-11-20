#include "libft.h"

int		ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_isupper(ft_atoi(av[1]));
	return (0);
}
