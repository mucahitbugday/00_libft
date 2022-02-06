//memset gibi işlev görür, belirtilen değere kadar boş değer ekler '/0'
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*s_c;

	s_c = (char *)s;
	i = 0;
	while (i < n)
	{
		*(s_c + i) = 0;
		i++;
	}
}
