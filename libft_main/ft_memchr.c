/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:20:27 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 21:55:26 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//str dizisinde c dizisini n karakterine kadar arar
//bulduğu karakterden sonrasını bastırı
//bulamadığı durumda null basar

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	if (c == '\0')
		return ((void *)s + i);
	return (NULL);
}

/*
#include <stdio.h>
int main(void)
{
	char  str[] = "www.42kocaeli.tr";

	printf("%s\n", ft_memchr(str, '.', 3));
	return 0;
}
*/