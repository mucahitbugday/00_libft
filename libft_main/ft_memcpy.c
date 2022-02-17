/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:14:57 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 01:56:58 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Src den dst kopyalar src uzunluğu gonderilir.

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	
	char str1[30];
	char str2[30] = "";
	
	ft_memcpy(str1, str2, strlen(str2));

	printf("str1: %s\nstr2: %s\n",str1,str2);
	return 0;
}
*/
