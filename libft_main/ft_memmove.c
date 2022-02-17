/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:15:21 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:11:45 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//memmove=> kopyalanacak konuma gider ara belleğe 
//ve kopyalananı ara belleğe yapıştırır.
//Bu nedenle, hız memcpyve kararlılıkmemmove

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_ptr;
	char	*src_ptr;

	if (!dst && !src)
		return (NULL);
	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	if (dst_ptr > src_ptr)
	{
		while (len-- > 0)
			*(dst_ptr + len) = *(src_ptr + len);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(dst_ptr + i) = *(src_ptr + i);
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
int main() {
	
	char str1[] = "01234";
	char str2[] = "56789";

	printf("str1 before : %s\n", str1);
	
	ft_memmove(str1, str2, 1);
	printf("str1 after  : %s\n", str1);

	return 0;
}
*/