/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:21:25 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/14 22:07:53 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//dizi dizisinde ara dizisini arar len uzunluğuna kadar.
//bulduğu karakterden sonrasını döndürür.
//bulunmaz ise NULL döner

char	*ft_strnstr(const char *dizi, const char *ara, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (*ara == 0)
		return ((char *)dizi);
	while (dizi[x] != 0 && x < len)
	{
		y = 0;
		while (dizi[x + y] == ara[y]
			&& ara[y] != 0 && y + x < len)
			y++;
		if (!ara[y])
			return ((char *)&dizi[x]);
		x++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char s1[30] = "pen pineapple apple pen!";

	char* ptr = ft_strnstr(s1, "en", 10);
	printf("%s\n", ptr);
	
	char* ptr1 = ft_strnstr(s1, "en", 5);
	printf("%s\n", ptr1);

	return (0);
}
*/