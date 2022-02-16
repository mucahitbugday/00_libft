/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:21:01 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 21:48:25 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s1 dizisi ile s2 dizsimi n karakerlerini kadar karşılaştırır. hangi char karakterlerini
// karşılaştırı s1 dizisi s2 den büyük-küçük-eşit olabilir

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char s1[] = "abdefg123";
	char s2[] = "abdefg";
	printf("%d\n", ft_memcmp(s1, s2, 7));
	printf("%d\n", ft_memcmp(s1, s2, 6));

	return (0);
}
*/