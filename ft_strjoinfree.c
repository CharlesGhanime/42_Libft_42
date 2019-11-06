
#include "libft.h"

char	*ft_strjoinfree(char const *s1, char const *s2, int flag)
{
	char *new;
	size_t len;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
		new = ft_strcpy(new, s1);
		new = ft_strcat(new, s2);
	if (flag == 1)
		free((char *)s1);
	if (flag == 2)
		free((char *)s2);
	if (flag == 3)
	{
		free((char *)s1);
		free((char *)s2);
	}
	return (new);
}
