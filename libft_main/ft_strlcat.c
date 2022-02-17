/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:16:52 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/17 12:48:40 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//BK
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	m;
	size_t	p;

	m = 0;
	n = ft_strlen(dst);
	p = ft_strlen(src);
	if (dstsize == 0)
		return (p);
	while ((src[m] != '\0') && ((n + m) < (dstsize - 1)))
	{
		dst[n + m] = src[m];
		m++;
	}
	dst[n + m] = '\0';
	if (dstsize > n)
		return (n + p);
	return (dstsize + p);
}
