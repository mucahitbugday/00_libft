#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_c;

	b_c = (unsigned char *)b;
	while (len--)
		*b_c++ = (unsigned char)c;
	return (b);
}
