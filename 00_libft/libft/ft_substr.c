/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:29:07 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 00:33:36 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr_str;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	ptr_str = (char *)malloc(len + 1);
	if (!ptr_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		ptr_str[j++] = s[i++];
	ptr_str[j] = '\0';
	return (ptr_str);
}

/*
	ft_substr()
	gönderilen dizinin x elemanından başlayarak y elemanına kadar geri dönderir
	src[] = "0123456789";
	ft_substr(src,0,2);
	çıktısı 01 olur
*/

/*
#include <stdio.h>
int main(void){

	unsigned int x;
	size_t y;

	x = 0;
	y = 2;

	char src[] = "0123456789";
	printf("(%d%zu) yazar: ft_putstr(src,x,y): %s",x,y-1,ft_substr(src,x,y));
	
	return(0);
}
*/
