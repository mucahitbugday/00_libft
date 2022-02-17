/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:13:24 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 01:45:56 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//gönderilen dizinin 0 dan len kadar c ile değiştirir

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>
int main()
{
	char str[100] = "Hello World!";
	printf("%s\n", str);
	printf("%s\n", ft_memset(str, 'a', 5));
	printf("%s\n", str);
}
*/