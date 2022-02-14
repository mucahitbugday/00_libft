/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbugday <mbugday@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:12:21 by mbugday           #+#    #+#             */
/*   Updated: 2022/02/12 11:10:56 by mbugday          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// Yazdırılbilir karakter olup olmadıgını sorgular 

/*
int main ()
{
	printf("ft_isprint('b') = %i\n", ft_isprint('b'));
	printf("ft_isprint('A') = %i\n", ft_isprint('A'));
	printf("ft_isprint('@') = %i\n\n", ft_isprint('@'));
}
*/